#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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
    int evenArr[6] = {1, 2, 3, 4, 5, 6};
    int oddArr[5] = {1, 2, 3, 4, 5};

    reverse(evenArr, 6);
    reverse(oddArr, 5);

    printArray(evenArr, 6);
    printArray(oddArr, 5);

    return 0;
}