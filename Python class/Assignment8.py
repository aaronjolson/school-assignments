"""
Aaron Olson
Sec 10
10.6.14

This program takes a user inputed password, checks if it is alphanumeric, longer than 8 characters
and contains at least two numbers
"""
# Take user inputted password
def userInput():
    password = input("Enter a password that is alphanumeric, longer than 8 characters, and contains at least two numbers: ")
    return password
# Check if password meets ncessary criteria
def passCheck(password):
    specials = "!@#$%^&*()_+=-[]{}\|;:<>,./?~`"
    if specials in password or len(password) <8 or sum(password.count(x) for x in '1 2 3 4 5 6 7 8 9 0'.split()) <2 or ' ' in password:
        if specials in password or ' ' in password:
            print("Password must be alphanumeric.")
        elif len(password) <8:
            print("Password must be at least 8 characters long.")
        elif sum(password.count(x) for x in '1 2 3 4 5 6 7 8 9 0'.split()) <2:
            print("Password must have at least 2 digits.")
        return False
    else:
        return True
# Call 
def main():
    string = userInput()
    valid = passCheck(string)
    if valid:
        print(string, "is valid.")
    else:
        print(string, "is invalid.")
main()

"""
Program output:

Enter a password that is alphanumeric, longer than 8 characters, and contains at least two numbers: cnfgcn
Password must be at least 8 characters long.
cnfgcn is invalid.
>>>
Enter a password that is alphanumeric, longer than 8 characters, and contains at least two numbers: abcd123
Password must be at least 8 characters long.
abcd123 is invalid.
>>>
Enter a password that is alphanumeric, longer than 8 characters, and contains at least two numbers: password1234
password1234 is valid.
>>>
Enter a password that is alphanumeric, longer than 8 characters, and contains at least two numbers: $special char*
Password must be alphanumeric.
$special char* is invalid.
>>> 
"""
