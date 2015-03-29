"""
Aaron Olson
Sec 10
This program takes a user inputted number and computes its
greatest common divisor.
"""
#start the program by taking user input
m, n = eval(input("Enter two numbers separated by comma: "))
def gcd(m, n):
    if n == 0:
        return "error" # return error because python cannot divide by zero
    elif m%n == 0:
        return n #return n because n is the gcd
    else:     
        return gcd(m, m%n) #recursive call gcd()
print(gcd(m, n)) #print to display result

""" Program Output:
Enter two numbers separated by comma: 6, 2
2
Enter two numbers separated by comma: 12, 8
4
Enter two numbers separated by comma: 8, 8
8
Enter two numbers separated by comma: 13, 17
13
Enter two numbers separated by comma: 0, 8
8
Enter two numbers separated by comma: 8, 0
error
>>>
"""
