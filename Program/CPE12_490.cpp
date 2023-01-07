/**
 * @file CPE12_490.cpp
 * @author evan
 * @brief c045: 00490 - Rotating Sentences
 * @version 0.1
 * @date 2022-08-08
 * @copyright Copyright (c) 2022
 **/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> all_sentence;
    int Maximum = 0;
    string temp_sentence;
    while (getline(cin, temp_sentence))
    {
        Maximum = max((int)temp_sentence.size(), Maximum);
        all_sentence.push_back(temp_sentence);
    }
    for (int i = 0; i < Maximum; ++i)
    {
        for (int j = all_sentence.size() - 1; j > -1; --j)
        {
            if (i < all_sentence[j].size())
            {
                cout << all_sentence[j][i];
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}