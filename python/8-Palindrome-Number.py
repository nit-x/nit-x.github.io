num = int(input("Enter a number: "))

reversed = 0
n = num
while n!=0:
    r = n%10
    reversed = reversed * 10 + r
    n = n//10
if(reversed == num):
    print ("The given number is palindrome")
else:
    print ("The given number is not palindrome")
