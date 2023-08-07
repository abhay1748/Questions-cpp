#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    // cout  <<"value at index 1 is "<< endl << arr[1] ;
    /*int arr[15] = {2,3};
    int n = 15;
     cout<<"Printing the array"<< endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";}
        int array[1000];
        int size = 1000;
        int val = 1;
        for(int i = 0; i< size;i++){
            array[i] = val;
        }
        for( int i = 0; i<size; i++){
            cout<< array[i]<<" ";
        }*/
    int array[4] = {0, 1, 2, 3};
    int size = 4;
    printArray(array, 4);

    int secondArray[10];
    size = 10;
    printArray(secondArray, 10);

    int thirdArray[20];
    size = 20;
    printArray(thirdArray, 20);
}