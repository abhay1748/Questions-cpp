#include <iostream>
using namespace std;

int sum(int array[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + array[i];
    }
    return ans;
}
int main()
{
    int arr[100];
    int size;
    cin >> size;
    // TAKING ARRAY INPUT
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: "
         << " ";
    // PRINTING ARRAY
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "The sum of all elements of array is " << sum(arr, size) << endl;
    return 0;
}