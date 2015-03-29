""" Aaron Olson
Sec 10
This program prompts a user to input numbers as elements in a 3x3 matrix.
It prints the matrix and then sums each row of the matrix. """
def getMatrix():
    matrix = []
    rows = 3
    columns = 3
    print("Enter matrix elements row by row: ")
    for r in range(rows):
        matrix.append([]) # add new empty row
        for c in range(columns):
            value = eval(input("enter the next element: "))
            matrix[r].append(value)
    return matrix

def printMatrix(matrix):
    for i in range(3):
        print(matrix[i])

def sumRow(matrix):
    rowSum = []
    for row in range(3):
        total = 0
        total += sum(matrix[row])
        rowSum.append(total)
    return rowSum

def main():
    matrix = getMatrix()
    printMatrix(matrix)
    rowSum = sumRow(matrix)
    for i in range(3):
        print("the sum of row", i+1, "is", rowSum[i])
main()
""" Output:
Enter matrix elements row by row: 
enter the next element: 1
enter the next element: 2
enter the next element: 3
enter the next element: 4
enter the next element: 5
enter the next element: 6
enter the next element: 7
enter the next element: 8
enter the next element: 9
[1, 2, 3]
[4, 5, 6]
[7, 8, 9]
the sum of row 1 is 6
the sum of row 2 is 15
the sum of row 3 is 24 """
