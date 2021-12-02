#include "processor.h"
#include "linux_parser.h"
#include <string>

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
    return active_jiffies/jiffies;
}

void Processor::set_jiffies(){
  jiffies = LinuxParser::Jiffies();
  active_jiffies = LinuxParser::ActiveJiffies();
  idle_jiffies = LinuxParser::IdleJiffies();
}