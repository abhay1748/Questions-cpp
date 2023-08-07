#include <iostream>
using namespace std;
void swapping(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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

    swapping(evenArr, 6);
    swapping(oddArr, 5);

    printArray(evenArr, 6);
    printArray(oddArr, 5);

    return 0;
}