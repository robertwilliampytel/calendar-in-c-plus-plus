#ifndef CALENDAR_H
#define CALENDAR_H
#include "Date.h"
#include <memory>
#include <iomanip>


class Calendar {

private:

  long year;

  std::unique_ptr<Date> dates[LEAP_YEAR];

public:

  Calendar(long);
  ~Calendar();

  void print(void);

  void pprintJanuary  (void);
  void pprintFebruary (void);
  void pprintMarch    (void);  
  void pprintApril    (void);
  void pprintMay      (void);
  void pprintJune     (void);
  void pprintJuly     (void);
  void pprintAugust   (void);
  void pprintSeptember(void);
  void pprintOctober  (void);
  void pprintNovember (void);
  void pprintDecember (void);
  void pprintCalendar (void);
};

#endif
