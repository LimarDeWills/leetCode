#include "log.h"

template <typename T, typename... Types>
void log(T var1, Types... var2)
{
    std::cout << var1 << "\t";
 
    log(var2...);
}

template <typename Func, typename T, typename... Types>
void log(Func funcname, T var1, Types... var2)
{
    std::cout << "Function: " << funcname << "\tParameters: ";
 
    log(var1, var2...);
}