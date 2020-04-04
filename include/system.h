#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <vector>

#include "process.h"
#include "processor.h"

class System {
 public:
  System();
  Processor& Cpu();                   // TODO: See src/system.cpp
  std::vector<Process>& Processes();  // TODO: See src/system.cpp
  float MemoryUtilization();
  long UpTime();
  int TotalProcesses();
  int RunningProcesses();
  std::string Kernel() const;
  std::string OperatingSystem() const;

 private:
  Processor cpu_ = {};
  std::vector<Process> processes_ = {};
  const std::string os_;
  const std::string kernel_;
};

#endif
