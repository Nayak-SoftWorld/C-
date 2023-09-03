#include <iostream>
using namespace std;

// 1 --> even
// 0 --> odd
// bool isEven(int x)
// {
//     if (x & 1)
//     { // odd
//         return 0;
//     }
//     else
//     { // even
//         return 1;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     if (isEven(num))
//     {
//         cout << " num is even." << endl;
//     }
//     else
//     {
//         cout << "num is odd" << endl;
//     }
//     return 0;
// }

// calculate nCr
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int nCr(int n, int r)
// {
//     int numi = factorial(n);
//     int denomi = factorial(r) * factorial(n - r);

//     int result = numi / denomi;

//     return result;
// }

// int main()
// {
//     int n, r;
//     cout << "Enter n : ";
//     cin >> n;
//     cout << "Enter r : ";
//     cin >> r;
//     int res = nCr(n, r);
//     cout << "The result of " << n << "C" << r << " is : " << res;
// }

bool isPrime(int n)
{
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter num : ";
    cin >> n;
    if (isPrime(n))
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}