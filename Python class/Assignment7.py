"""
Aaron Olson
Sec 10
10.6.14

This program takes rectangle objects derived from a recangle class and
returns the dimensions, area, and perimeter the rectangle.
"""
class Rectangle:
    # Initalizer for Rectangle objects
    def __init__(self, width = 1 , height = 2):
        self.__width = width
        self.__height = height
    # return the width
    def getWidth(self):
        return self.__width
    # return the height
    def getHeight(self):
        return self.__height 
    # This computes the area of a rectangle given height and width arguments 
    def getArea(self):
        return (self.__width * self.__height)        
    # This computes the perimeter of a rectangle given height and width arguments
    def getPerimeter(self):
        return (2*(self.__width + self.__height))   
# This calls both getArea and getPerimeter using test values
def main():
    r1 = Rectangle(4,40)
    print("A rectangle", r1.getWidth(),'x',r1.getHeight(),"has an area of", r1.getArea(),"and a perimeter of",r1.getPerimeter())
    r2 = Rectangle(3.5, 35.7)
    print("A rectangle", r2.getWidth(),'x',r2.getHeight(),"has an area of", round(r2.getArea(),2),"and a perimeter of",r2.getPerimeter())   
#call to the main function
main()
    
"""
Output from run:
>>> 
A rectangle 4 x 40 has an area of 160 and a perimeter of 88
A rectangle 3.5 x 35.7 has an area of 124.95 and a perimeter of 78.4
>>> 
"""
