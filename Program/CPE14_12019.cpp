/**
 * @file CPE14_12019.cpp
 * @author evan
 * @brief f709: 12019 - Doom's Day Algorithm
 * @version 0.1
 * @date 2022-08-10
 * @copyright Copyright (c) 2022
 **/

// 4/3 -> 4/4(monday)[93-94 = -1]
// 1/1 -> 4/4(monday)[0+31+28+31(+4)=94] 1-94=-93 93%7=2 1/1為Saturday
#include <iostream>
#include <string>
using namespace std;

string dayOfWeek[7] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};

int base[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        --n;
        int M, D;
        cin >> M >> D;
        int sum_day = 0;
        // shift month
        for (int i = 0; i < M; ++i)
        {
            sum_day += base[i];
        }
        sum_day += D;
        sum_day %= 7;
        cout << dayOfWeek[sum_day] << endl;
    }
    return 0;
}