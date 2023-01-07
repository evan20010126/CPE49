# /**
#  * @file CPE08_10008.cpp
#  * @author evan
#  * @brief c044: 10008 - What's Cryptanalysis
#  * @version 0.1
#  * @date 2022-08-07
#  * @copyright Copyright (c) 2022
#  **/

n = int(input())
my_dict = {}

for i in range(n):
    line = input()
    for w in line:
        word = w.upper()
        if (ord('A') <= ord(word) and ord(word) <= ord('Z')):
            try:
                my_dict[word] += 1
            except:
                my_dict.setdefault(word, 1)

my_dict = dict(sorted(my_dict.items(), key=lambda item: item[0]))

my_tuplelist = sorted(my_dict.items(), key=lambda item: item[1], reverse=True)

for tup in my_tuplelist:
    print(f"{tup[0]} {tup[1]}")
