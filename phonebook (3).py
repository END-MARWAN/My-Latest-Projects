import csv

file = open ("phonebook.csv" , "a")

name = input ("name: ")
number = input ("number: ")

writer = csv.writer ( file )
writer.writerow([name,number])

file.close()
