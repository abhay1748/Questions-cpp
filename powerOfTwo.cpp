#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
bool isPowerOfTwo(int n)
{
    for (int i = 0; i < 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int x = 63;
    bool ans = isPowerOfTwo(x);
    cout << ans;
}