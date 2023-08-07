#include <iostream>
using namespace std;
int pivotElement(int arr[], int n)
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
    int arr[6] = {8, 10, 17, 1, 2, 3};

    cout << " The Index of pivot element of  the array is: " << pivotElement(arr, 6) << endl;
    return 0;
}