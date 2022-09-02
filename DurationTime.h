//Simple benchmark class
#include <chrono>
#include <iostream>

#include "log.h"

typedef std::chrono::time_point<std::chrono::high_resolution_clock> time_point_hrc;

class DurationTime
{
    time_point_hrc startTime;
    std::string funcName;
    
    template <typename T, typename... Types>
    void log(T var1, Types... var2);

    template <typename Func, typename T, typename... Types>
    void log(Func funcname, T var1, Types... var2);

public:
    DurationTime() = delete;
    DurationTime(std::string fn);
    ~DurationTime();
};