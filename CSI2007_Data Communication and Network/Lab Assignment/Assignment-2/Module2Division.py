# input
# 1) data
# 2) divisor

def xor(num1, num2):
    result = []
 
    for i in range(1, len(num2)):  ## should go from 1, since the MSB must be left
        if num1[i] == num2[i]:
            result.append('0')
        else:
            result.append('1')
 
    return ''.join(result)

def Modulo2Division(divident, divisor):
 
    count = len(divisor)
    xor_answer = divident[0:count]  ## Initially slicing out the divident 
    print("Initial xor_answer : ",xor_answer)
 
    while count<len(divident): ## xor division must take place till the end of (n-1) zeros appended
        
        print("divisor : ",divisor)
        print("xor_answer : ",xor_answer)
        if xor_answer[0] == '1':  ## left-most bit is 1
            xor_answer = xor(divisor, xor_answer) + divident[count]  ## string concatenation
            print("Starting with 1 xor_answer : ",xor_answer)
        elif xor_answer[0]  == '0':  ## Right-most bit is 0
            xor_answer = xor('0'*count, xor_answer) + divident[count]  ## producting 0*count --> to make one of the number completely 0
            print("Starting with 0 xor_answer : ",xor_answer)
        count+=1

    print("Before the last bit (Before if) : ",xor_answer)
    ## Final division
    if xor_answer [0] == '1':
        xor_answer = xor(divisor, xor_answer)
    else:
        xor_answer = xor('0'*count, xor_answer)
 
    return xor_answer

divident = "100100000"
divisor    = "1101"
Modulo2Division(divident,divisor)