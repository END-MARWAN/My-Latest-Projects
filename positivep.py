def main():
    height = get_positive()
    for i in range(height):
        print("#")

def get_positive():
    while True:
        try:
            n = int(input("n: "))
            if n > 0:
                return n
        except ValueError:
            print("Error: that's not an integer number!")

main()
