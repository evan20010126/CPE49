# /**
# * @ file CPE18_10268.cpp
# * @ author evan
# * @ brief f444: 10268 - 498-bis
# * @ version 0.1
# * @ date 2022-08-15
# * @ copyright Copyright(c) 2022
# * */
try:
    while(True):
        x = int(input())
        seq = input().strip().split(' ')
        seq.reverse()
        for i in range(len(seq)):
            seq[i] = int(seq[i]) * i

        seq.pop(0)
        sum = 0
        for i in range(0, len(seq)):
            sum += (seq[i] * x**i)
        print(sum)
except EOFError:
    pass
