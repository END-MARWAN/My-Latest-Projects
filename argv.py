from sys import argv , exit
if len (argv) !=2:
    print ("Missing command line argument")
    exit(1)
print(f"hello{argv[1]}")
exit(0)
