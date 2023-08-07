#include <iostream>

#include <vector>
using namespace std;
void rotateArray(int arr[], int n, int k)
{

    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    arr[n] = temp;
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
    int arr[7] = {2, 4, 5, 6, 7, 9, 19};
    rotateArray(arr, 7, 2);
    printArray(arr, 7);
}