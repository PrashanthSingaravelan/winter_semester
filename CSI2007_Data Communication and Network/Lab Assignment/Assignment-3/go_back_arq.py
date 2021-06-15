import time as t
import random 

def parity_receiver(list1):
    if sum(list1)%2==0:
        return True
    else:
        return False

def Resend(Sf,Sn):
    t.sleep(2)
    print("So resending the frames from frame-{}".format(Sf))
    for i in range(Sf,Sn):
        print("Resending the frame-{}".format(i))        

def go_back_arq(list1):
    timer = len(list1)//2
    x = 0
    x = random.randint(0,len(list1)-1)
    if (0<=x<=timer):
        print("Timer from frame-{} to {}".format(1,timer))
        print("frame-{} is lost in the middle".format(x+1))
        Resend(1,x+1)
    elif (timer<x<=len(list1)):
        print("Timer from frame-{} to {}".format(timer,len(list1)))
        print("frame-{} is lost in the middle".format(x+1))
        Resend(timer,x+1)
    else:
        print("All frames have been successfully received by the receiver")

def nested_list_parity(list1):
    list2 = []
    cnt=-n
    for i in range(1,n+1):
        cnt+=n
        temp = []
        for j in range(cnt,n*i):
            temp.append(list1[j])
        if (sum(temp)%2==0):
            temp.append(0)
        else:
            temp.append(1)

        list2.append(temp)
    return(list2)

def main2(list2):
    cnt=0
    for i in list2:
        cnt+=1
        print("Sending the slot - {}".format(cnt))
        go_back_arq(i)
        print("Successfully received the slot - {}".format(cnt))
        print("Checking for data loss")
        if parity_receiver(i):
            print("Slot1 is successfully received without any data loss")
        print("\n\n")
        break

if __name__ == '__main__':
	list1 = [0,1,1,0,1,0,1,1,1,1,0,0,1,0,1,0,0,0,1,1,0,1,1,1,0,0,0,1,0,0]
	n = 5 # frames
	list2 = nested_list_parity(list1)
	main2(list2)