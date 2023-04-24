#include "Date.h"
#include <iostream>
#include <ios>
#include <limits>


Date::Date() {
  this->year  = 0L;
  this->month = 1;
  this->day   = 1;
}

Date::Date(long year, int month, int day) {

  if (!isValidDate(year, month, day))
  {
    this->year  = 0L;
    this->month = 1;
    this->day   = 1;
  }
  else
  {
    this->year  = year;
    this->month = month;
    this->day   = day;
  }
}

Date::~Date() {
  
}

constexpr Date& Date::operator=(Date& date) {
  this->year  = date.year;
  this->month = date.month;
  this->day   = date.day;

  return *this;
}

constexpr Date* Date::operator=(Date* date) {
  this->year  = date->year;
  this->month = date->month;
  this->day   = date->day;

  return this;
}

bool Date::isLeapYear(long year) {

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  }

  return false;
}

bool Date::isValidDate(long year, int month, int day) {

  const bool LEAP = isLeapYear(year);

  switch(month)
  {
    case JANUARY:
      return true;
      break;
    case FEBRUARY:
      return (((!LEAP) && day <= FEBRUARY_END) ||
              (  LEAP  && day <= FEBRUARY_END_LEAP));
      break;
    case MARCH:
      return day <= MARCH_END;
      break;
    case APRIL:
      return day <= APRIL_END;
      break;
    case MAY:
      return day <= MAY_END;
      break;
    case JUNE:
      return day <= JUNE_END;
      break;
    case JULY:
      return day <= JULY_END;
      break;
    case AUGUST:
      return day <= AUGUST_END;
      break;
    case SEPTEMBER:
      return day <= SEPTEMBER_END;
      break;
    case OCTOBER:
      return day <= OCTOBER_END;
      break;
    case NOVEMBER:
      return day <= NOVEMBER_END;
      break;
    case DECEMBER:
      return day <= DECEMBER_END;
      break;
    default:
      return false;
      break;
  }
}

long Date::getYear(void) {
  return this->year;
}

int Date::getMonth(void) {
  return this->month;
}

int Date::getDay(void) {
  return this->day;
}

// https://stackoverflow.com/questions/18728754/checking-cin-input-stream-produces-an-integer
void Date::setYear(void) {

  long n = -10000000000L;

  while (n < FOUR_BILLION_AGO ||
         n > FOUR_BILLION_FUT ||
         (!isValidDate(n, this->month, this->day)) ||
         std::cin.fail()) {

    std::cout << "Year (-4.5B to +4.5B, or -4500000000 to +4500000000):" << std::endl;

    std::cin.clear();

    std::cin  >> n;
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  
  this->year = n;
}

// https://stackoverflow.com/questions/18728754/checking-cin-input-stream-produces-an-integer
void Date::setMonth(void) {

  int n = 0;

  while (n < 1  ||
         n > 12 ||
         (!isValidDate(this->year, n, this->day)) ||
         std::cin.fail()) {

    std::cout << "Month (1 - 12):" << std::endl;

    std::cin.clear();

    std::cin  >> n;
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  
  this->month = n;
}

// https://stackoverflow.com/questions/18728754/checking-cin-input-stream-produces-an-integer
void Date::setDay(void) {

  int n = 0;

  while (n < 1  ||
         n > 31 ||
         (!isValidDate(this->year, this->month, n)) ||
         std::cin.fail()) {

    std::cout << "Day (1 - 31):" << std::endl;

    std::cin.clear();

    std::cin  >> n;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  
  this->day = n;
}

void Date::printYear(long year)  { std::cout << "Year:  " << year  << std::endl; }
void Date::printMonth(int month) { std::cout << "Month: " << month << std::endl; }
void Date::printDay(int day)     { std::cout << "Day:   " << day   << std::endl; }

void Date::print(long year, int month, int day) {
  Date::printYear(year);
  Date::printMonth(month);
  Date::printDay(day);
}