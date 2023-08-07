#include <iostream>
using namespace std;
bool search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int array[10] = {-1, -2, 3, 4, 5, 6, 7, 8, 9, 0};
    int element;
    cout << "Enter The Element You Want To Search For: " << endl;
    cin >> element;
    bool found = search(array, 10, element);
    if (found)
    {
        cout << " Element is present." << endl;
    }
    else
    {
        cout << "Element is not present in the given array." << endl;
    }
    return 0;
}