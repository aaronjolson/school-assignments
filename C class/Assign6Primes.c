#include <stdio.h>
#include <math.h>

/*
Aaron Olson
Sec 20
10.6.14

this program asks the user to enter a number and then finds all the primes of that number
*/

int main()
{        
    int input, counter;
    printf("Please enter a number to find its primes:\n");
    scanf("%d", &input);
    printf("The prime numbers in %d are:\n", input);
    for (counter =  2; counter < input; counter++) //this runs findPrime for each number up to the user's inputed number  
    { 
        findPrime(counter);
    }
    system("PAUSE");
    return 0;
}

int findPrime(int number)    
{
    int numberTest, nextNumber = 1;
    for (numberTest = 2; numberTest < number; numberTest++)
    {
        if (number%numberTest == 0 && numberTest < number) //tests to determine if the number is prime
            //continue;
        else 
            nextNumber++;                
    }
    if (nextNumber == (number - 1))
        printf("%d\n", number);
}

