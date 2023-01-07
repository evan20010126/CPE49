# /**
# * @ file CPE11_10252.cpp
# * @ author evan
# * @ brief e507: 10252 - Common Permutation
# * @ version 0.1
# * @ date 2022-08-08
# * @ copyright Copyright(c) 2022
# **/

# python EOF
# https://blog.csdn.net/qq_35793358/article/details/77506726
try:
    while(True):
        line1 = input()
        line2 = input()
        line1_map = {}
        line2_map = {}
        same_map = {}
        for i in line1:
            try:
                line1_map[i] += 1
            except:
                line1_map.setdefault(i, 1)
        for i in line2:
            try:
                line2_map[i] += 1
            except:
                line2_map.setdefault(i, 1)

        # confirm
        for i in line1_map.keys():
            if i in line2_map.keys():
                same_map[i] = min(line1_map[i], line2_map[i])
        tuplist = sorted(same_map.items(), key=lambda x: x[0])

        for tup in tuplist:
            for i in range(tup[1]):
                print(tup[0], end='')
        print("\n", end="")

except EOFError:
    pass
