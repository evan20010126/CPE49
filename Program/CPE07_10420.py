# /**
#  * @file CPE07_10420.cpp
#  * @author evan
#  * @brief a743: 10420 - List of Conquests
#  * @version 0.1
#  * @date 2022-08-07
#  * @copyright Copyright (c) 2022
#  **/

num = int(input())
my_dir = {}

for i in range(num):
    input_str = input()
    country = input_str.split()[0]
    try:
        my_dir[country] += 1
    except:
        my_dir.setdefault(country, 1)

my_tuplelist = sorted(my_dir.items(), key=lambda item: item[0])

for tup in my_tuplelist:
    print(f"{tup[0]} {tup[1]}")
