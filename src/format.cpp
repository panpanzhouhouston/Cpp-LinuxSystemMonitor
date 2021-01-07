#include <string>

#include "format.h"

using std::string;
using std::to_string;

// Done: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
  int hour, min, sec;
  hour = seconds / 3600;
  seconds = seconds % 3600;
  min = seconds / 60;
  sec = seconds % 60;
  return to_string(hour) + ':' + to_string(min) + ':' + to_string(sec); 
}