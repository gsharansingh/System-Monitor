#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    int _hour, _minute, _second, seconds_in_hour;
    _hour = seconds / 3600;
    seconds_in_hour = seconds % 3600;
    _minute = seconds_in_hour / 60;
    _second = seconds % 60;
    return std::to_string(_hour) + ":" + std::to_string(_minute) + ":" + std::to_string(_second); 
}