#include <iostream>
using namespace std;

void reverseArr(int arr[], int n)
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

void printArr(int arr[], int n)
{
    cout << "Reverse Array : ";
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 3, -9, 5, 7, 2};
    int brr[5] = {5, 6, -2, 7, 6};

    reverseArr(arr, 6);
    reverseArr(brr, 5);

    printArr(arr, 6);
    printArr(brr, 5);

    return 0;
}
