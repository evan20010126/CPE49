# /**
# * @ file CPE18_10268.cpp
# * @ author your name(you@domain.com)
# * @ brief
# * @ version 0.1
# * @ date 2022-08-15
# * @ copyright Copyright(c) 2022
# * */
try:
    while(True):
        x = int(input())
        seq = input().split(' ')
        seq.reverse()
        for i in range(len(seq)):
            if seq[i] != '':
                seq[i] = int(seq[i]) * i

        seq.pop(0)
        sum = 0
        for i in range(0, len(seq)):
            sum += (seq[i] * x**i)
        print(sum)
except EOFError:
    pass
