#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (ans > INT64_MAX / 10 || ans < INT64_MIN / 10)
        {
            cout << 0;
        }
        ans = (ans * 10) + digit;
        n /= 10;
    }
    cout << ans << endl;

    return 0;
}
