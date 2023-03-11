#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    sol = []
    for x in my_list:
        if x % 2 == 0:
            sol.append(True)
        else:
            sol.append(False)
    return sol
