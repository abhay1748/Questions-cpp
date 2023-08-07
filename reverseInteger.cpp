#include <stdio.h>
#include <iostream>
using namespace std;
int reverse(int x)
{
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;

        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}
int main()
{
    int x = 1234;
    int number = reverse(x);

    cout << " the reverse of this number is " << number << endl;
}