"""
Aaron Olson
Sec 10
9.17.14

This program takes user inputted integers and keeps track of certain metrics
"""
#Initial variable states and values
runLoop = True
positive_nums, negative_nums, total, average = 0,0,0,0
#Begin while loop
while runLoop == True:
    #Take user input
    number = eval(input("Enter an integer, the input ends if it is 0: "))
    #Handle user input and perform calculations 
    if number == 0 and negative_nums == 0 and positive_nums == 0:
        print("You didn't enter any number")

    elif number == 0:
        print("The number of positives is", positive_nums)
        print("The number of negatives is", negative_nums)
        print("The total is", total)
        print("The average is", round(total/(negative_nums+positive_nums),3))

        print("Restarting program\n")
        positive_nums, negative_nums, total, average = 0,0,0,0
        runLoop == False

    elif number > 0:
        positive_nums += 1
        total += number
    elif number < 0:
        negative_nums += 1
        total += number
"""
Enter an integer, the input ends if it is 0: 1
Enter an integer, the input ends if it is 0: 2
Enter an integer, the input ends if it is 0: -1
Enter an integer, the input ends if it is 0: 3
Enter an integer, the input ends if it is 0: 0
The number of positives is 3
The number of negatives is 1
The total is 5
The average is 1.25
>>>
Enter an integer, the input ends if it is 0: 0
You didn't enter any number
"""
        
    
    

    
        
    
