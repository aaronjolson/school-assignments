"""
Aaron Olson
Sec 10
9.17.14

This program takes user inputted numbers and returns the area and perimeter of a rectangle
"""
# This computes the area of a rectangle given height and width arguments 
def getArea(width,height):
    return (width*height)
    
# This computes the perimeter of a rectangle given height and width arguments
def getPerimeter(width,height):
    return (2*(width+height))
    
# This calls both getArea and getPerimeter using test values
def main():
    area = getArea(4,40)
    perimeter = getPerimeter(3.5,35.7)

    print("The area is", area)
    print("The perimeter is", perimeter)
    
#call to the main function
main()
    
"""
Output from run:

>>> 
The area is 160
The perimeter is 78.4
>>>  
"""
    
