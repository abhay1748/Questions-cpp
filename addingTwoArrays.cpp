#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}
vector<int> arraySum(vector<int> &a, int n, vector<int> &b, int m, vector<int> &c)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    int sum;
    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[3] = {1, 3, 4};
    int arr3[4] = {0};
    arraySum(vector<int> & arr1, 4, vector<int> & arr2, 4, vector<int> & arr3);
    printArray(arr3, 4);
}