#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ('A' <= ch && ch <= 'Z')
    {
        cout << "upper case" << endl;
    }
    else if ('a' <= ch && ch <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if ('0' <= ch && ch <= '9')
    {
        cout << "numeric" << endl;
    }
    return 0;
}