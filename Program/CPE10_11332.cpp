/**
 * @file CPE10_11332.cpp
 * @author evan
 * @brief c813: 11332 - Summing Digits
 * @version 0.1
 * @date 2022-08-08
 * @copyright Copyright (c) 2022
 **/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    while (true)
    {
        stringstream ss; // int->str
        string str;
        cin >> str;
        if (str == "0")
            break;
        while (str.size() != 1)
        {
            int sum = 0;
            for (int i = 0; i < str.size(); ++i)
            {
                sum += (int)(str[i] - '0');
            }
            ss << sum;
            ss >> str;
            ss.clear();
        }
        cout << str << endl;
    }
    return 0;
}