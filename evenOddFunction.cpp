#include <iostream>
using namespace std;
// 0 if odd
// 1 if even
bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "The number is Even" << endl;
    }
    else
    {
        cout << " The number is odd" << endl;
    }
}