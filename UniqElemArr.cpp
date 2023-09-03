#include <iostream>
using namespace std;

int findUniqElem(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {2, 3, 2, 5, 3, 5, 4};
    int num = findUniqElem(arr, 7);
    cout << "The Unique element of the given array is : " << num << endl;
    return 0;
}