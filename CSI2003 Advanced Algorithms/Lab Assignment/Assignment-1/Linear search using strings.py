str1 = input("Enter the string : ")
str2 = input("Enter the reference string : ")
cnt = 0
flag = 0

if len(str1)==len(str2):
    for i in range(len(str1)):
        if str1[i]==str2[i]:
            cnt +=1
    if cnt==len(str1):
        print("Your string is matched")
    else:   print("Your string is not matching")
else:
    print("Your string is not matching")

    