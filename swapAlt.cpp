#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    cout << "Alter Swaped array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[7] = {9, 6, 9, 8, 9, 5, 0};
    swapAlt(arr, 7);
    printArr(arr, 7); 
    return 0;
}