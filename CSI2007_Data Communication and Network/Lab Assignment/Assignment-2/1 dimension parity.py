def Sender(list1,m):
    cnt = 0
    for i in list1:
        if i==1:
            cnt+=1

    if (m=='odd_parity'):
        if (cnt%2!=0):
            print("Input data is odd_parity")

            list1.append(0)
            print("Parity bit 0 is added")
            print("Sender sends the data : ",*list1)  
            return list1
        else:
            print("Input data is not in odd parity, so converting")
            list1.append(1)
            print("Parity bit 1 is added")  
            print("Sender sends the data : ",*list1)
            return list1

    elif (m=='even_parity'):
        if (cnt%2==0):
            print("Input data is even_parity")

            list1.append(0)
            print("Parity bit 0 is added")  
            print("Sender sends the data : ",*list1)
            return list1
        else:
            print("Input data is not in even parity, so converting")
            list1.append(1)
            print("Parity bit 1 is added")  
            print("Sender sends the data : ",*list1)
            return list1

def Receiver(ans,str1):
    cnt = 0
    for i in ans:
        if i==1:
            cnt+=1
    if (cnt%2==0 and str1=='even_parity'):
        print("Receiver has received correctly")
    elif (cnt%2!=0 and str1=='odd_parity'):
        print("Receiver has received correctly")
    else :
    	print("Receiver has not received correcly")

if __name__ == '__main__':
        list1 = list(map(int,input("Enter the data : ").split()))
        str1 = input("Enter the mode of parity : ")
        ans = Sender(list1,str1)
        print("Receiver receives the data : ",*ans)
        Receiver(ans,str1)



        