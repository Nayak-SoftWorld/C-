#include <iostream>
using namespace std; 

// Find all duplicates
int main() // not implemented
{
    int arr[5] = {2, 4, 7, 2, 4};

    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
    }
    cout << "Duplicate num : " << ans << endl;

    return 0;
    
}