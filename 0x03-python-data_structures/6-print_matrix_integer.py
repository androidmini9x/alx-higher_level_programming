#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for x in range(len(matrix)):
        arr_len = len(matrix[x])
        for y in range(arr_len):
            if y == arr_len - 1:
                print("{:d}".format(matrix[x][y]), end="")
            else:
                print("{:d} ".format(matrix[x][y]), end="")
        print()
