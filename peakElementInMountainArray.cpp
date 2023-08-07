#include <iostream>
using namespace std;
int peakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int mountainArr[7] = {5, 6, 7, 9, 4, 2, 1};

    cout << " The Index of peak element in this array is " << peakElement(mountainArr, 7) << endl;
    return 0;
}