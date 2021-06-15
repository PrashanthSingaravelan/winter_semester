## approach-1

a = "1101"
b = "100"
max_len = max(len(a), len(b)) 
a = a.zfill(max_len) 
b = b.zfill(max_len) 
carry = 0
result = ''

for i in range(max_len-1,-1,-1):
    temp = carry
    temp = temp + (1 if a[i]=='1' else 0)
    temp = temp + (1 if b[i]=='1' else 0)
    result = ('1' if temp%2==1 else '0') + result
    carry = 0 if temp<2 else 1
if carry!=0:
    result = '1' + result

print(result.zfill(max_len))

## approach-2
# Python program to add two binary numbers. 

# Driver code 
# Declaring the variables 
a = "1101"
b = "100"

# Calculating binary value using function 
sum = bin(int(a, 2) + int(b, 2)) 

# Printing result 
print(sum[2:]) 
