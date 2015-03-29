"""
Aaron Olson
CSCI 2001
sec 10
assignment 2

This program takes a numerical input from the user
and then converts it to degrees fahrenheit.
"""

celsius = input ("Enter a degree in Celsius: ")
celsiusToFloat = float(celsius)

fahrenheit = 9/5 * celsiusToFloat + 32

print( str(celsius) + " Celsius is " + str(fahrenheit) + " Fahrenheit")


"""
Outputs:

Enter a degree in Celsius: 43
43 Celsius is 109.4 Fahrenheit
>>> 

Enter a degree in Celsius: 0
0 Celsius is 32.0 Fahrenheit
>>>

Enter a degree in Celsius: 100
100 Celsius is 212.0 Fahrenheit

Enter a degree in Celsius: 37
37 Celsius is 98.60000000000001 Fahrenheit

"""
