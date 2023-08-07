#include <iostream>
using namespace std;

char getMaxOccChar(string s)
{
    int arr[26] = {0};
    int n = s.length();
    // storing count of the character
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        // lowercase
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    // finding max occuring character
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}