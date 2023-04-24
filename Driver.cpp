#include "Calendar.h"


int main() {

  std::unique_ptr<Calendar> calendar(new Calendar(2020));
  
  calendar->pprintCalendar();

  return 0;
}
