/**
 * @ file CPE16_10056.cpp
 * @ author evan
 * @ brief e510: 10056 - What is the Probability?
 * @ version 0.1
 * @ date 2022-08-11
 * @ copyright Copyright(c) 2022
 **/
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int cas;
    scanf("%d", &cas);
    while (cas > 0)
    {
        cas--;
        int player, which;
        double win_p, lose_p;
        scanf("%d %lf %d", &player, &win_p, &which);
        lose_p = 1 - win_p;
        /* By computing */
        double answer;
        answer = (win_p * pow(lose_p, which - 1)) / (1 - pow(lose_p, player));
        printf("%.4lf\n", answer);
    }

    return 0;
}