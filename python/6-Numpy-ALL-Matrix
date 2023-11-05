import numpy as np

# Take user input for the elements of the first matrix
rows1 = int(input("Enter the number of rows for matrix 1: "))
cols1 = int(input("Enter the number of columns for matrix 1: "))

print("Enter elements for matrix 1:")
matrix1 = []
for i in range(rows1):
    row = [int(x) for x in input().split()]
    matrix1.append(row)

# Take user input for the elements of the second matrix
rows2 = int(input("Enter the number of rows for matrix 2: "))
cols2 = int(input("Enter the number of columns for matrix 2: "))

print("Enter elements for matrix 2:")
matrix2 = []
for i in range(rows2):
    row = [int(x) for x in input().split()]
    matrix2.append(row)

# Convert input lists into NumPy arrays
matrix1 = np.array(matrix1)
matrix2 = np.array(matrix2)

if cols1 == rows2:  # Check if matrices can be multiplied
    # Addition of matrices
    matrix_sum = np.add(matrix1, matrix2)

    # Multiplication of matrices
    matrix_product = np.dot(matrix1, matrix2)

    print("\nMatrix 1:")
    print(matrix1)

    print("\nMatrix 2:")
    print(matrix2)

    print("\nAddition of the matrices:")
    print(matrix_sum)

    print("\nMultiplication of the matrices:")
    print(matrix_product)
else:
    print("Matrix multiplication not possible due to incompatible dimensions.")
