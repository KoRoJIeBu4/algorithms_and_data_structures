#include <iostream>
#include <math.h>

using ull = unsigned long long int;
int fast_pow(ull x, ull n)
{
    if(n < 1)
        return -1;
    if(n == 1)
        return x;
    if(n % 2 == 0)
        return fast_pow(x * x, n >> 1);
    else
        return x * fast_pow(x * x, floor(n >> 1));
}   

int main()
{
    ull x, n;
    // enter base (int x) and power (int n)
    std::cin >> x >> n;
    // output
    std::cout << fast_pow(x, n);
    return 0;
}