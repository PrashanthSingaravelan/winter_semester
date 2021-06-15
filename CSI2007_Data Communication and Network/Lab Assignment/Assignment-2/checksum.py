def check(temp):
    flag = 0
    for i in temp:
        if temp[i]==0:
            flag +=1
    if len(temp)==flag:
        print("Receiver has received the correct data")
    else:
        print("Reciever has not received the correct data")  ## Will check the final out-put is stream of 0's

def concatenate_list_data(list):
    result= ''
    for element in list:
        result += str(element)
    return str(result)  ## Converting the list elements into a single integer

def complement(temp):
    list1 = []
    for i in range(len(temp)):
        if temp[i]==0:
            list1.append(1)
        else:
            list1.append(0)        
    return list1  ## Getting the complement of the elements

def Binary_Addition(x, y): 
    max_len = max(len(x), len(y)) 

    x = x.zfill(max_len) 
    y = y.zfill(max_len) 
    
    result = '' 
    carry = 0

    for i in range(max_len - 1, -1, -1): 
        temp = carry 
        temp += 1 if x[i] == '1' else 0
        temp += 1 if y[i] == '1' else 0
        result = ('1' if temp % 2 == 1 else '0') + result 
        carry = 0 if temp < 2 else 1     # Compute the carry. 
    
    if carry !=0 : result = '1' + result 

    return result.zfill(max_len) ## Doing the binary addition

def Cyclic_addition(int1,int2):
    result = Binary_Addition(int1,int2)    
    if len(result)>len(int1):
        while len(result)>len(int1):
            diff     = abs(len(int1)-len(result))
            extra  = result[0:diff]
            result = result[diff:len(result)]
            result = Binary_Addition(result,extra)   
        return result
    else:
        return result  ## Taking care of the last carry

def Access(main_list,n):
    main_list_length = int(len(main_list)/n)
    list1 = [main_list[i:i+main_list_length] for i in range(0, len(main_list), main_list_length)]
    int1 = concatenate_list_data(list1[0])   ## 0th index
    int2 = concatenate_list_data(list1[1])  ## 1st index
    temp_ans = Cyclic_addition(int1,int2)
    for i in range(2,len(list1)):
        int1 = concatenate_list_data(list1[i])
        temp_ans = Cyclic_addition(temp_ans,int1)
    return(temp_ans)   ## Accessing the above function
    
if __name__ == '__main__':
    #main_list = list(map(int,input().split()))
    main_list = [1,0,0,1,1,0,0,1,1,1,1,0,0,0,1,0, 0,0,1,0,0,1,0,0 ,1, 0, 0, 0, 0,1,0,0]
    n = 4
    temp = Access(main_list,n)

    last = []
    for i in temp:
        last.append(int(i))

    last = complement(last)
    print("checksum elements : ",*last)
    for i in last:
        main_list.append(i)
    print("Sender data : ",*main_list)
    #################################################
    temp = Access(main_list,n+1)
    print("At the receiver end : ",*main_list)
    temp = complement(temp)
    check(temp)  

