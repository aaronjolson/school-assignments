"""
Aaron Olson
Sec 10
This program takes user inputted scores, stores them in a list,
and finishes by running the list through a conditional handling function to
assign each score a letter grade.
"""
def getScores():
    runloop = True
    scores = []
    print("Enter scores one at a time, 0-100, enter -999 when done.")
    while runloop == True:     
        score = eval(input("Enter score: "))
        if score != -999 and score < 101 and score > -1: 
            scores.append(score)
        elif score == -999:
            runloop = False
        else:
            print("please enter a valid score!")
    return scores
def grade(scores):
    for score in scores:
        if score >= 90:
            print(score,"is an A")
        elif score >= 80 and score < 90:
            print(score,"is a B")
        elif score >= 70 and score < 80:
            print(score,"is a C")
        elif score >= 60 and score < 70:
            print(score,"is a D")
        elif score < 60:
            print(score,"is a F")
def main():
    scoreList = getScores()
    points = grade(scoreList)
main()
""" Program Output:
Enter scores one at a time, 0-100, enter -999 when done.
Enter score: 99
Enter score: 90
Enter score: 85
Enter score: 77
Enter score: 66
Enter score: 55
Enter score: 5
Enter score: 700
please enter a valid score!
Enter score: -1
please enter a valid score!
Enter score: -999
99 is an A
90 is an A
85 is a B
77 is a C
66 is a D
55 is a F
5 is a F
>>>"""
