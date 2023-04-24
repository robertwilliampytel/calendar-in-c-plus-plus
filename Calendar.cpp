#include "Calendar.h"
#include "Date.cpp"


Calendar::Calendar(long year) {

  this->year = year;

  int days = 0;

  for (int month = JANUARY; month <= DECEMBER; ++month)
  {
    int maxDays = 0;

    switch(month) {
      case JANUARY:   maxDays = JANUARY_END;   break;
      case FEBRUARY:  if (Date::isLeapYear(year)) { maxDays = FEBRUARY_END_LEAP; } else { maxDays = FEBRUARY_END; } break;
      case MARCH:     maxDays = MARCH_END;     break;
      case APRIL:     maxDays = APRIL_END;     break;
      case MAY:       maxDays = MAY_END;       break;
      case JUNE:      maxDays = JUNE_END;      break;
      case JULY:      maxDays = JULY_END;      break;
      case AUGUST:    maxDays = AUGUST_END;    break;
      case SEPTEMBER: maxDays = SEPTEMBER_END; break;
      case OCTOBER:   maxDays = OCTOBER_END;   break;
      case NOVEMBER:  maxDays = NOVEMBER_END;  break;
      case DECEMBER:  maxDays = DECEMBER_END;  break;
    }

    for (int day = 1; day <= maxDays; ++day)
    {
      dates[days] = std::unique_ptr<Date>(new Date(year, month, day));
      ++days;
    }
  }
}

Calendar::~Calendar() {

}

void Calendar::print(void) {
  for (int day = 0; day < LEAP_YEAR; ++day) {

    if (this->dates[day] == NULL) { break; } // WHY? For the extra leap year day.
    
    Date::print(this->dates[day]->getYear(), this->dates[day]->getMonth(), this->dates[day]->getDay());
  }
}

void Calendar::pprintJanuary(void) {

  std::cout << " January " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= JANUARY_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= JANUARY_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= JANUARY_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintFebruary(void) {

  std::cout << " February " << std::endl;

  int day = 1;

  if (Date::isLeapYear(this->year)) {

    for (int day = 1; day <= FEBRUARY_END_LEAP; ++day) {
      if (day < 10) { std::cout << "---";  }
      else          { std::cout << "----"; }
    }

    std::cout << std::endl;

    for (int day = 1; day <= FEBRUARY_END_LEAP; ++day) {
      std::cout << std::setw(1) << " " << day << "|";
    }

    std::cout << std::endl;

    for (int day = 1; day <= FEBRUARY_END_LEAP; ++day) {
      if (day < 10) { std::cout << "---";  }
      else          { std::cout << "----"; }
    }

    std::cout << std::endl;
  }
  else {
    for (int day = 1; day <= FEBRUARY_END; ++day) {
      if (day < 10) { std::cout << "---";  }
      else          { std::cout << "----"; }
    }

    std::cout << std::endl;

    for (int day = 1; day <= FEBRUARY_END; ++day) {
      std::cout << std::setw(1) << " " << day << "|";
    }

    std::cout << std::endl;

    for (int day = 1; day <= FEBRUARY_END; ++day) {
      if (day < 10) { std::cout << "---";  }
      else          { std::cout << "----"; }
    }

    std::cout << std::endl;
  }
}

void Calendar::pprintMarch(void) {

  std::cout << " March " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= MARCH_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= MARCH_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= MARCH_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintApril(void) {

  std::cout << " April " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= APRIL_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= APRIL_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= APRIL_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintMay(void) {

  std::cout << " May " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= MAY_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= MAY_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= MAY_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintJune(void) {

  std::cout << " June " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= JUNE_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= JUNE_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= JUNE_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintJuly(void) {

  std::cout << " July " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= JULY_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= JULY_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= JULY_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintAugust(void) {

  std::cout << " August " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= AUGUST_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= AUGUST_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= AUGUST_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintSeptember(void) {

  std::cout << " September " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= SEPTEMBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= SEPTEMBER_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= SEPTEMBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintOctober(void) {

  std::cout << " October " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= OCTOBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= OCTOBER_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= OCTOBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintNovember(void) {

  std::cout << " November " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= NOVEMBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= NOVEMBER_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= NOVEMBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintDecember(void) {

  std::cout << " December " << std::endl;

  int day = 1;
  
  for (int day = 1; day <= DECEMBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;

  for (int day = 1; day <= DECEMBER_END; ++day) {
    std::cout << std::setw(1) << " " << day << "|";
  }

  std::cout << std::endl;

  for (int day = 1; day <= DECEMBER_END; ++day) {
    if (day < 10) { std::cout << "---";  }
    else          { std::cout << "----"; }
  }

  std::cout << std::endl;
}

void Calendar::pprintCalendar(void) {

  this->pprintJanuary();
  this->pprintFebruary();
  this->pprintMarch();
  this->pprintApril();
  this->pprintMay();
  this->pprintJune();
  this->pprintJuly();
  this->pprintAugust();
  this->pprintSeptember();
  this->pprintOctober();
  this->pprintNovember();
  this->pprintDecember();
}