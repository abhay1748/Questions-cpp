#include <iostream>
using namespace std;
bool isPalindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
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
    char str[4];
    cin >> str;
    int len = getLength(str);
    cout << "Palindrome or not :" << isPalindrome(str, len);
    return 0;
}
