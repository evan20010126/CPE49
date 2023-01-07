/**
 * @file CPE06_10101.cpp
 * @author evan
 * @brief a741: 10101 - Bangla Numbers
 * @version 0.1
 * @date 2022-08-04
 * @copyright Copyright (c) 2022
 **/

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

int main()
{
    pair<string, long long int> unit[4];
    unit[0].first = "kuti";
    unit[0].second = 1;
    unit[1].first = "shata";
    unit[1].second = 100;
    unit[2].first = "hajar";
    unit[2].second = 1000;
    unit[3].first = "lakh";
    unit[3].second = 100000;
    // unit[4].first = "kuti";
    // unit[4].second = 10000000;
    int round = 1;
    long long int num;
    while (cin >> num)
    {
        cout << round << ". ";
        round += 1;
        bool First = true;
        int now = 0; // no unit
        long long int base = 1;
        stringstream ss;
        stack<string> printer;
        if (num == 0)
        {
            cout << "0";
        }
        while ((num / base) != 0)
        {
            string str_num;
            if (!First)
            {
                // first
                printer.push(unit[now].first);
            }
            First = false;
            long long int next_base;
            if ((now + 1) == 4)
            {
                next_base = (base * (10000000 / unit[now].second));
            }
            else
            {
                next_base = (base * (unit[now + 1].second / unit[now].second));
            }

            ss << ((num % next_base) - (num % base)) / base;
            ss >> str_num;
            // cout << str_num << endl;
            printer.push(str_num);
            base = next_base;
            now = (now + 1);
            ss.clear();

            if (now == 4)
            {
                // cycle
                num = (num / 10000000);
                base = 1;
                now = 0;
            }
        }

        while (printer.size() != 0)
        {
            if (printer.top() == "0")
            {
                // cout << printer.top();
                printer.pop();
                if (!printer.empty() && printer.top() != "kuti")
                {
                    printer.pop(); // 把單位pop掉
                }
            }
            else
            {
                cout << printer.top();
                printer.pop();
                if (printer.size() != 0)
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}

/*
<Internet>
//Bangla Numbers
// 網路解答https://jennaweng0621.pixnet.net/blog/post/385350754-uva10101-bangla-numbers

#include <iostream>
using namespace std;

void segmentation(long long int);

int main()
{
    long long int input;
    int time = 0;
    while (cin >> input)
    {
        cout << (++time) << ". ";
        if (input == 0)
        {
            cout << 0;
        }
        else
        {
            segmentation(input);
        }
        cout << "\n";
    }
    return 0;
}

void segmentation(long long int num)
{
    if (num / 10000000 != 0)
    {
        segmentation(num / 10000000);
        cout << "kuti ";
        num = num % 10000000;
    }
    if (num / 100000 != 0)
    {
        cout << num / 100000 << " lakh ";
        num = num % 100000;
    }
    if (num / 1000 != 0)
    {
        cout << num / 1000 << " hajar ";
        num = num % 1000;
    }
    if (num / 100 != 0)
    {
        cout << num / 100 << " shata ";
        num = num % 100;
    }
    if (num)
    {
        cout << num << " ";
    }
}

*/