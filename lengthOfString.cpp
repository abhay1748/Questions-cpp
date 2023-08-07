#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[10];
    cout << "enter your name" << endl;
    cin >> name;
    cout << "your name is " << name << endl;
    cout << "length of your name is " << getLength(name) << endl;
    return 0;
}