#include <iostream>
using namespace std;
void fib(int n)
{
    int a = 0;
    int b = 1;
    int nextNumber;
    for (int i = 1; i <= n; i++)
    {
        nextNumber = a + b;
        a = b;
        b = nextNumber;
    }
    cout << nextNumber << " ";
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}