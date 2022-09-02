#include "DurationTime.h"

DurationTime::DurationTime(std::string fn)
{
    funcName = fn;
    startTime =  std::chrono::high_resolution_clock::now();
}

DurationTime::~DurationTime()
{
    time_point_hrc stopTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsedTime = stopTime - startTime;
    std::cout << "Function: " << funcName << "\t" << elapsedTime.count() << "ms\n";
}

template <typename T, typename... Types>
void DurationTime::log(T var1, Types... var2)
{
    std::cout << var1 << "\t";
 
    log(var2...);
}

template <typename Func, typename T, typename... Types>
void DurationTime::log(Func funcname, T var1, Types... var2)
{
    std::cout << "Function: " << funcname << "\tParameters: ";
 
    log(var1, var2...);
}