#ifndef DATE_H
#define DATE_H


class Date {

private:

  long year;
  int month;
  int day;

public:

  Date();
  Date(long, int, int);
  ~Date();

  constexpr Date& operator=(Date&);
  constexpr Date* operator=(Date*);

  long getYear(void);
  int  getMonth(void);
  int  getDay(void);

  void setYear(void);
  void setMonth(void);
  void setDay(void);

  static bool isLeapYear(long);
  static bool isValidDate(long, int, int);

  static void printYear(long);
  static void printMonth(int);
  static void printDay(int);
  static void print(long, int, int);
};

const int  JANUARY   = 1;
const int  FEBRUARY  = 2;
const int  MARCH     = 3;
const int  APRIL     = 4;
const int  MAY       = 5;
const int  JUNE      = 6;
const int  JULY      = 7;
const int  AUGUST    = 8;
const int  SEPTEMBER = 9;
const int  OCTOBER   = 10;
const int  NOVEMBER  = 11;
const int  DECEMBER  = 12;

const int  JANUARY_END       = 31;
const int  FEBRUARY_END      = 28;
const int  FEBRUARY_END_LEAP = 29;
const int  MARCH_END         = 31;
const int  APRIL_END         = 30;
const int  MAY_END           = 31;
const int  JUNE_END          = 30;
const int  JULY_END          = 31;
const int  AUGUST_END        = 31;
const int  SEPTEMBER_END     = 30;
const int  OCTOBER_END       = 31;
const int  NOVEMBER_END      = 30;
const int  DECEMBER_END      = 31;

const int  WEEK = 7;

const int  REGULAR_YEAR = 365;
const int  LEAP_YEAR    = 366;

const long FOUR_BILLION_AGO = -4500000000;
const long FOUR_BILLION_FUT = +4500000000;

#endif
