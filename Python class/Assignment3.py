"""

Aaron Olson
CSCI 2001
sec 10


This program computes the area of a pentagon.
Side length is specified by the user.

"""

import math

# This is the user prompt
radius = input ("Enter the length from the center to a vertex: ")

# This calculates the  area
sideLength = 2 * float(radius) * math.sin(math.pi / 5)

area = ((3 * math.sqrt(3)) /2) * (float(sideLength)**2)

# This prints the output
print("The area of the pentagon is "+ str(round(area, 2)))

#Output:
"""

Enter the length from the center to a vertex: 5.5
The area of the pentagon is 108.61

Enter the length from the center to a vertex: 9999
The area of the pentagon is 358973496.4

"""
