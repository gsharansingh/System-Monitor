#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp
  void set_jiffies();

  // TODO: Declare any necessary private members
 private:
  long jiffies = 0, active_jiffies = 0, idle_jiffies = 0;
};

#endif