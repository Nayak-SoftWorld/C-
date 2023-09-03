#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[15] = {20, -8, 25, -6, 1, 8, 6, 7, -9, 10, 21, 11, 30, 19, 29};
    int key;
    cout << "Enter key to search : ";
    cin >> key;

    bool found = linearSearch(arr, 15, key);

    if (found)
    {
        cout << "Present ." << endl;
    }
    else
    {
        cout << "Not Present ." << endl;
    }

    return 0;
}