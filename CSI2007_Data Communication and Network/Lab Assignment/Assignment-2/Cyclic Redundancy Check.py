def Add_bits(divident,divisor):
    len_divident = len(divident)
    len_divisor  = len(divisor)
    
    for i in range(len_divisor,(len_divident)+1):
        divident = divident + '0'
    return divident

def xor(num1,num2):
    result = []
 
    for i in range(1, len(num2)):  ## should go from 1, since the MSB must be left
        if num1[i] == num2[i]:
            result.append('0')
        else:
            result.append('1')
    return ''.join(result)

def Modulo2Division(divident,divisor):
    count = len(divisor)
    xor_answer = divident[0:count]  ## Initially slicing out the divident 
 
    while count<len(divident)-1: ## xor division must take place till the end of (n-1) zeros appended
 
        if xor_answer[0] == '1':  ## left-most bit is 1
            xor_answer = xor(divisor, xor_answer) + divident[count]  ## string concatenation
        elif xor_answer[0] == '0':  ## Right-most bit is 0
            xor_answer = xor('0'*count, xor_answer) + divident[count]  ## producting 0*count --> to make one of the number completely 0
        count+=1

    ## Final division
    if xor_answer [0] == '1':
        xor_answer = xor(divisor, xor_answer)
    else:
        xor_answer = xor('0'*count, xor_answer)
 
    return xor_answer

def Receiver_check(sender_data,input_divisor):
    temp_str = ""
    for i in range(len(input_divisor)-1):
        temp_str = temp_str + '0'
    print("Receiver data : ",sender_data)
    if (Modulo2Division(sender_data,input_divisor)) == (temp_str):
        print("Receiver has received the correct data")
    else:
        print("Receiver has not received the correct data")

# input
# 1) data (divident)
# 2) divisor
if __name__ == '__main__':
    input_divident = input("Enter the data (divident) : ")
    input_divisor  = input("Enter the data (divisor)  : ")
    print("Sender data : ",input_divident)
    extra_bits_divident = Add_bits(input_divident,input_divisor)
    crc = Modulo2Division(extra_bits_divident,input_divisor)

    sender_data = input_divident + crc
    
    print("CRC : ",crc)
    print("Sender data along with CRC : ",sender_data)

    Receiver_check(sender_data,input_divisor)


