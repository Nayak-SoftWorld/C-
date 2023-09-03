#include <iostream>
using namespace std;

int main()
{
    int totalAmount = 1330;

    int count = totalAmount / 100;
    int count1 = totalAmount - (count * 100);

    int count2 = count1 / 20;
    int count3 = count1 - (count2 * 20);

    int count4 = count3 / 1;
    int count5 = count3 - (count4 * 1);

    cout << "100 ke note chahiye : " << count << endl;
    cout << "20 ka note chahiye :  " << count2 << endl;
    cout << "1 ke note chahiye : " << count4 << endl;
    cout << "1300 + 20 + 10 : " << totalAmount << endl;

    return 0;

    // int amount = 1330;
    // int start = 1;

    // cout << "The amount " << amount << " requires the following notes: " << endl;

    // switch (start)
    // {
    // case 1:
    //     cout << (amount / 100) << " 100 Rupees Notes" << endl;
    //     amount = amount % 100;

    // case 2:
    //     cout << (amount / 50) << " 50 Rupees Notes" << endl;
    //     amount = amount % 50;

    // case 3:
    //     cout << (amount / 20) << " 20 Rupees Notes" << endl;
    //     amount = amount % 20;

    // default:
    //     cout << (amount) << " 1 Rupees Notes" << endl;
    //     amount = amount % 1;
    //     break;
    // }
}