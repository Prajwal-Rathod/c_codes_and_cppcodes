# to crate unbreakable password
import random


upper_case = "abcdefghijklmnopqrstuvwxyz"
lower_case = "ABCDEFGHIJKLMNOPQESTUVWXYZ"
number = "123456789"
symbols =  "!@#$%^&*"
Use_for = upper_case + lower_case + number + symbols

length_for_pass = 8
password = "".join(random.sample(Use_for,length_for_pass))

print("your genarated password is :")

print( password )
