#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int element)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            start = mid + 1;
        }
        else if (arr[mid] > element)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int evenArray[6] = {2, 4, 6, 8, 14, 18};
    int oddArray[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(evenArray, 6, 18);
    int oddIndex = binarySearch(oddArray, 5, 0);

    cout << " The index of 18 is: " << evenIndex << endl;
    cout << " The index of 0 is: " << oddIndex << endl;
}