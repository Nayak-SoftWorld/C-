#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    // int max = INT16_MIN;
    int maxi = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
        
        //     if (num[i] > max)
        //     {
        //         max = num[i];
        //     }
    }
    // return max;
    return maxi;
}

int getMin(int num[], int n)
{
    int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter array lenght : ";
    cin >> size;

    int num[100];
    cout << "Enter elements of an array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "The maximum value : " << getMax(num, size) << endl;
    cout << "The minimum value : " << getMin(num, size) << endl;
    return 0;
}