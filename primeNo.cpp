#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "The number is not  prime" << endl;
        }
        i = i + 1;
    }
}