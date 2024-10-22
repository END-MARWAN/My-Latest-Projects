from cs50 import get_int

def main ():
    height = get_positive()
    for i in range(height):
        print("#")


def get_positive():
    while True:
        n = get_int("n: ")
        if n > 0:
            break

    return n

main()
