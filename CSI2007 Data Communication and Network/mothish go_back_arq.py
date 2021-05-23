import threading
import time
from collections import deque as que
import random

window = que([0, 1, 2, 3])
frames = [4, 5, 6, -1, -1, -1, -1]
rn = que([0] * 10)
s = 0
finalreceive = [0] * 7
frn = 0

def framing(list1):
    m = len(bin(max(list1)).replace("0b", ""))
    list1 = map(lambda x: format(x, '0' + str(m) + 'b'), list1)
    list1 = [list(map(int, i)) for i in list1]
    return list1

def thread_make(y, sv):
    x = 0
    #print(f"sleepvar is {sv}")
    #print(f"{y} gonna sleep now")
    while(x < (sv + 4)):
        time.sleep(1)
        x += 1
    #print(f"Done sleeping of {y}")

def receiver(z, sv):
    global finalreceive, window, frames, rn, s, frn
    #print(f"sleepvar is {sv}")
    time.sleep(sv + 2)
    y = random.randrange(0, 50) % 7
    #print(f"for {z} random number is-->{y}")
    if ((y != 0) and (rn[0] == 0)):
        print(f"for {z} -->Ack")
        finalreceive[frn] = z
        window.popleft()
        window.append(frames[s])
        s += 1
        frn += 1
    elif (y != 0):
        print(f"for {z} -->Ack But discard it ")
    else:
        print(f"for {z} -->_ _ _")
        rn[0] = -1
    #print(f"rn is {rn}")

#framed_list=framing()

while(sum(window) > -4):
    threadList = []
    ReceiveList = []
    sleepvar = 0
    if(rn[0] == -1):
        print("Retransmitting....")
    else:
        print("Transmitting.....")
    rn[0] = 0
    print(window)
    for i in window:
        if(rn[i] == 0) and i >= 0:
            t = threading.Thread(target=thread_make, args=(i, sleepvar))
            threadList.append(t)
            t.start()
            r = threading.Thread(target=receiver, args=(i, sleepvar))
            ReceiveList.append(r)
            r.start()
            sleepvar += 1
    #print("for loop done")
    for i in threadList:
        i.join()
    for r1 in ReceiveList:
        r1.join()
print(f"Receiver received : {finalreceive}")