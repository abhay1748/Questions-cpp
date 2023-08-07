#include <iostream>
using namespace std;
void moveZeroes(int arr[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
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
    int arr[8] = {9, 0, 67, 0, 0, 54, 3, 0};
    moveZeroes(arr, 8);
    printArray(arr, 8);
}