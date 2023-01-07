# /**
# * @ file CPE15_10038.cpp
# * @ author evan
# * @ brief d097: 10038 - Jolly Jumpers
# * @ version 0.1
# * @ date 2022-08-10
# * @ copyright Copyright(c) 2022
# **/


try:
    while(True):
        seq = input().split(' ')
        del seq[0]
        if (len(seq) == 1):
            print("Jolly")
            continue

        check_list = [i for i in range(1, len(seq))]

        for i in range(len(seq)-1):
            try:
                check_list.remove(abs(int(seq[i]) - int(seq[i+1])))
            except:
                pass

        if (len(check_list) == 0):
            print("Jolly")
        else:
            print("Not jolly")
except EOFError:
    pass
