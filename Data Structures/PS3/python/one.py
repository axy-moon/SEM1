vowels = ['a','e','i','o','u','A','E','I','O','U']
name = input("Enter your name: ")
count = 0

for x in name:
    if x in vowels:
        count += 1
print(count)
