#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    cout << "The array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int Lenght = sizeof(arr) / sizeof(int);
    int size = sizeof(arr);
    cout << "Lenght is : " << Lenght << endl;
    cout << "Size is : " << size << endl;
    printArr(arr, 5);
}