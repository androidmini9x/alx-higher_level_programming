#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    arr = []
    for i in range(len(matrix)):
        arr.append(list(map(lambda x: x ** 2, matrix[i])))
    return arr
