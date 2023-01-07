/**
 * @file CPE19_10783.cpp
 * @author your name (you@domain.com)
 * @brief c022: 10783 - Odd Sum
 * @version 0.1
 * @date 2022-08-15
 * @copyright Copyright (c) 2022
 * */
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int cas = 1; cas <= T; ++cas)
    {
        int a, b;
        int sum = 0;
        cin >> a;
        cin >> b;
        for (int i = a; i <= b; ++i)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << "Case " << cas << ": ";
        cout << sum << endl;
    }
    return 0;
}