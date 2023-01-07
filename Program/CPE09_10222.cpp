/**
 * @file CPE09_10222.cpp
 * @author evan
 * @brief e578: 10222 - Decode the Mad man
 * @version 0.1
 * @date 2022-08-08
 * @copyright Copyright (c) 2022
 **/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string in = "234567890-=dmbgthjkpl;'.,[]eyfuonrvic\\/ ";
    string out = "`1234567890abcdefghijklmnopqrstuvwxyz[, ";
    string line;
    while (getline(cin, line))
    {
        for (int i = 0; i < line.size(); ++i)
        {
            char ch = tolower(line[i]);
            for (int j = 0; j < in.size(); ++j)
            {
                if (in[j] == ch)
                {
                    cout << out[j];
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}