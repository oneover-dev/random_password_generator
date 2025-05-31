import random

length = int(input("Enter password length: "))

if length <= 0:
    print("Length must be greater than 0")
else:
    chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}<>?/|"
    password = ''.join(random.choice(chars) for _ in range(length))
    print(password)
