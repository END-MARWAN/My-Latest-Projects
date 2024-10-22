import sys

numbers = [4,6,2,8,1,0]
if 0 in numbers:
    print ("Found")
    sys.exit(0)
print("Not Found")
sys.exit (1)
