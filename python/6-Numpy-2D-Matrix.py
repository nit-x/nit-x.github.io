import numpy as np

matrix1 = []
print("Enter elements for matrix 1:")
for i in range(2):
    row = [int(x) for x in input().split()]
    matrix1.append(row)

matrix2 = []
print("Enter elements for matrix 2:")
for i in range(2):
    row = [int(x) for x in input().split()]
    matrix2.append(row)

matrix1 = np.array(matrix1)
matrix2 = np.array(matrix2)

matrix_sum = np.add(matrix1, matrix2)

matrix_product = np.dot(matrix1, matrix2)

print("\nMatrix 1:")
print(matrix1)

print("\nMatrix 2:")
print(matrix2)

print("\nAddition of the matrices:")
print(matrix_sum)

print("\nMultiplication of the matrices:")
print(matrix_product)
