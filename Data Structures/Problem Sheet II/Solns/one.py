while(True):
    num= int(input("Enter number less than 100: "))
    if num<100:
        if num%3 == 0 and num%5 == 0 and num%7 == 0:
            print(str(num) + " is a multiple of 3, 5 and 7")
            break
    else:
        print("Invalid Input(Enter number less than 100)")