import numpy as np
import random

def binaryToDecimal(n):
    num = n;
    dec_value = 0;
     
    # Initializing base
    # value to 1, i.e 2 ^ 0
    base = 1;
     
    temp = num;
    while(temp):
        last_digit = temp % 10;
        temp = int(temp / 10);
         
        dec_value += last_digit * base;
        base = base * 2;
    return dec_value;

def Sender(temp_question):
    print("Sender data : ",*temp_question)
    question_list = temp_question
    ## to know the size of sender data along with the required parity data
    cnt = 0
    for i in range(len(temp_question)):
        if i%2==0:
            cnt+=1
    cnt+=len(temp_question)

    list2 = ["hello" for i in range(cnt)]
    for i in range(1,cnt+1):    
        if (i and (not(i & (i - 1)))) or i==1:
            list2[i-1] = 0
        else:
            list2[i-1] = temp_question.pop()

    for i in range(1,len(list2)):    
        if (i and (not(i & (i - 1)))) or i==1:   ## to get the i which is in the powers of 2

            ## to generate the pattern 
            sum1 = 0        
            x = i
            y = i
            while x<=len(list2):
                for i in range(x,x+y):
                    if i<=len(list2):
                        sum1 = sum1 + list2[i-1]
                x += 2*y

            if sum1%2==0: list2[y-1] = 0
            else:list2[y-1] = 1
    
    print("Sender data with partiy : ",*list2)
    Error_creation(list2,cnt)
    return (list2,question_list)

def Error_creation(list2,cnt):
    rand = random.randrange(1,len(list2))  ## generating the random number
    rand = rand-1
    print("error secret --> ",rand+1)

    if list2[rand]==1:list2[rand]=0
    elif list2[rand]==0:list2[rand]=1

    print("Sender data with parity (error) : ",*list2)
    Receiver(list2,cnt)

def Receiver(list2,cnt):
    print("Receiver data with parity (error) : ",*list2)
    bin_dec = []
    for i in range(1,len(list2)):    
        if (i and (not(i & (i - 1)))) or i==1:   ## to get the i which is in the powers of 2
            sum1 = 0        
            x = i
            y = i
            while x<=len(list2):
                for i in range(x,x+y):
                    if i<=len(list2):
                        sum1 = sum1 + list2[i-1]
                x += 2*y

            if sum1%2==0:bin_dec.append(0)
            else: bin_dec.append(1)

    bin_dec.reverse()
    error_bit = binaryToDecimal(int(''.join([str(i) for i in bin_dec])))
    print("Error bit position : ",error_bit)
    error_bit = error_bit-1

    if list2[error_bit]==1:list2[error_bit] = 0
    elif list2[error_bit]==0:list2[error_bit] = 1

    print("After correction with parity : ",*list2)
    Remove(list2,cnt)

def Remove(list2,cnt):
    list_index = []
    for i in range(1,cnt+1):    
        if ((i and (not(i & (i - 1)))) or i==1):
            list_index.append(i)
    list_index.reverse()   ## to maintain the indices to remove the parity
    for i in list_index:
        list2.pop(i-1)
    list2.reverse()
    
    print("Receiver data (remove the parity) : ",*list2)

if __name__ == '__main__':
    question_list = list(map(int,input("Enter the list elements : ").split()))
    receiver_list, question_list = Sender(question_list)
    
    # if question_list == receiver_list:
    #     print("Receiver has received the correct data")
    # else:
    #     print("Receiver has not received the correct data")
    