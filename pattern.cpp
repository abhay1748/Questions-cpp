#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    int c = i;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << c;
            c = c + 1;
            ;
            j++;
        }
        cout << endl;
        i++;
    }
}