#include <iostream>

template <typename T, typename... Types>
void log(T var1, Types... var2);

template <typename Func, typename T, typename... Types>
void log(Func funcname, T var1, Types... var2);