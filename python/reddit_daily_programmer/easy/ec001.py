#! /usr/bin/env python

# Variable assignment:
name = input("Please enter your name: ")
age = input("Please enter your age: ")
username = input("Please enter your username: ")

# Open (create if non-existant) a file in read + write mode:
nametxt = open("name.txt", "w+")

# Write a string to the file:
nametxt.write("Your name is {}, you're {} years old, and your username is {}\n"
        .format(name, age, username))

# Seek back to the beginning of the file:
nametxt.seek(0, 0)

# Print the file:
print("{}".format(nametxt.read()), end="")

# Close file:
nametxt.close()
