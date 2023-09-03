#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void sortArr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        while (arr[start] == 0)
        {
            start++;
        }
        while (arr[end] == 1)
        {
            end--;
        }
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[10] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1};
    sortArr(arr, 10);
    printArray(arr, 10);

    return 0;
}

