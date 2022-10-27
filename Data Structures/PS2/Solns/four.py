k=0
rows = int("Enter the no of rows: ")

for i in range(1,rows+1):
    for space in range(1,rows-i):
        print(" ")
    while k!= 2*i-1:
        print(i)
        k += 1
    print()