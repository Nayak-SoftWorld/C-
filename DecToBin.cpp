#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the num value : ";
    cin >> num;

    // int i = 0;
    // float ans = 0;

    // while (num != 0)
    // {
    //     int bit = num & 1;
    //     ans = (bit * pow(10, i)) + ans;

    //     num = num >> 1;
    //     i++;
    // }
    // cout << ans << endl;

    if (num < 0)
    {
        num = -num;
    }
    int min = ~num;
    int ans = 0;
    int i = 0;
    while (min != 0)
    {
        int bit = min & 1;
        ans = (bit * pow(10, i)) + ans;
        min >>= 1;
        i++;
    }
    ans++;
    cout << ans << endl;

    return 0;
}