/**
 * @file CPE13_272.cpp
 * @author evan
 * @brief c007: 00272 - TeX Quotes
 * @version 0.1
 * @date 2022-08-08
 * @copyright Copyright (c) 2022
 **/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    bool is_first = true;
    while (getline(cin, line))
    {
        for (auto ch : line)
        {
            if (ch == '"')
            {
                if (is_first)
                {
                    cout << "``";
                    is_first = false;
                }
                else
                {
                    cout << "''";
                    is_first = true;
                }
            }
            else
            {
                cout << ch;
            }
        }
        cout << endl;
    }

    return 0;
}