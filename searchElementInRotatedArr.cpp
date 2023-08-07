#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[0] <= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[7] = {9, 10, 11, 1, 2, 3, 4};
    cout << "The index of pivot element is " << getPivot(arr, 7);
    return 0;
}