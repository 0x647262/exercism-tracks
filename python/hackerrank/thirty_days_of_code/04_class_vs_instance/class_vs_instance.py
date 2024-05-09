'''
Task: 

    Write a Person class with an instance variable, age, and a constructor
    that takes an integer, initialAge, as a parameter. The constructor must
    assign initialAge to age after confirming the argument passed as
    initialAge is not negative; if a negative argument is passed as
    initialAge, the constructor should set age to 0 and print Age is not
    valid, setting age to 0 and print "Age is not valid, setting age to 0.. In
    addition, you must write the following instance methods:

        1. yearPasses() should increase the age instance variable by 1.

        2. amIOld() should perform the following conditional actions:
            * If age < 13, print "You are young.".
            * If age >= 13 and age < 18, print "You are a teenager.".
            * Otherwise, print "You are old.".

Note:

    Do not remove or alter the stub code in the editor.

Input Format:

    Input is handled for you by the stub code in the editor.

    The first line contains an integer, T (the number of test cases), and the
    T subsequent lines each contain an integer denoting the age of a Person
    instance.

Constraints:

    * 1 <= T <= 4
    * -5 <= age <= 30
'''


class Person:
    def __init__(self,initialAge):
        if initialAge < 0:
            print("Age is not valid, setting age to 0.")
            self.age = 0
        else:
            self.age = initialAge

    def amIOld(self):
        if self.age < 13:
            print("You are young.")
        elif 13 <= self.age < 18:
            print("You are a teenager.")
        else:
            print("You are old.")

    def yearPasses(self):
        self.age += 1


t = int(input())
for i in range(0, t):
    age = int(input())         
    p = Person(age)  
    p.amIOld()
    for j in range(0, 3):
        p.yearPasses()       
    p.amIOld()
    print("")
