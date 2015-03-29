"""
Aaron Olson
Sec 10
Assignment 4

This program solves the quadratic equation
ax**2 + bx + c = 0

a,b,c are provied by the user

"""

import math

#Prompt user for input to give values to the coefficients
a,b,c = eval(input("Enter a, b, c: "))

#equation to calculate the discriminant
discriminant = b**2-4*a*c

#case handling for different coefficient combinations along with
#calculations of the quadractic formula
if discriminant < 0:
    print ("This equation has no real roots")
elif a == 0:
    print("This is not a quadratic formula")
elif discriminant == 0:
    singleRoot = (-b+math.sqrt(b**2-4*a*c))/2*a
    print ("The root is: ", round(singleRoot, 2))
else:
    solution1 = (-b+math.sqrt((b**2)-(4*(a*c))))/(2*a)
    solution2 = (-b-math.sqrt((b**2)-(4*(a*c))))/(2*a)
    print ("The roots are: ", round(solution1, 2), " and", round(solution2, 2))

"""
>>>
Enter a, b, c: 1,-1,-6
The roots are: 3.0  and -2.0
>>> 
Enter a, b, c: 1,-15,0
The roots are:  15.0  and 0.0
>>> 
Enter a, b, c: 1,0,-16
The roots are:  4.0  and -4.0
>>>
Enter a, b, c: 3,3,-6
The roots are:  1.0  and -2.0
>>>
Enter a, b, c: 0,6,3
This is not a quadratic formula
>>> 
Enter a, b, c: 1,-6,13
This equation has no real roots
>>> 
"""
