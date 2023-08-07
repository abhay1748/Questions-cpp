#include <iostream>
using namespace std;
int sum(int array[], int n)
{
    int ans[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        ans[0] = ans[0] + array[i];
    }
    return sum;
}
int main()
{
    int arr[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
     sum(arr , size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    sum(arr , size);
    return 0;
}