/**
 * @file CPE17_10170.cpp
 * @author evan
 * @brief e555: 10170 - The Hotel with Infinite Rooms
 * @version 0.1
 * @date 2022-08-15
 * @copyright Copyright (c) 2022
 * */

#include <iostream>
using namespace std;

int main()
{
    long long int S, D, sum;
    while (cin >> S >> D)
    {
        sum = S;
        while (sum < D)
        {
            ++S;
            sum += S;
        }
        cout << S << endl;
    }

    return 0;
}