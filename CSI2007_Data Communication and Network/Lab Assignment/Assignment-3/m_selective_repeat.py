import threading
import time
from collections import deque as que
import random

# #def framing(list1):
#     m = len(bin(max(list1)).replace("0b", ""))
#     list1 = map(lambda x: format(x, '0' + str(m) + 'b'), list1)
#     list1 = [list(map(int, i)) for i in list1]
#     return list1


def send(y, sv):
    x = 0
    while(x < (sv + 4)):
        time.sleep(1)
        x += 1

def receiver(z, sv):
    global finalreceive, window, frames, rn, s, frn
    time.sleep(sv + 2)
    y = random.randrange(0, 14) % 3
    if (y != 0):
        print(f"Ack {z+1}  -->confirms the frame-{z} has received")
        finalreceive[z] = z
        window.append(frames[s])
        s += 1
        frn += 1
    else:
        print(f"NAK {z}  -->frame- {z} has to be send again")
        rn.appendleft(z)
    window.popleft()

window = que([0, 1, 2, 3])
frames = [4, 5, 6, -1, -1, -1, -1]
rn = que([])
s = 0
finalreceive = [0] * 7
frn = 0

while(sum(window) > -4):
    threadList = []
    ReceiveList = []
    sleepvar = 0
    while(rn):
        print(f"Retransmitting....{rn[0]}")
        window.appendleft(rn[0])
        rn.popleft()
    print("Transmitting.....")
    print("frames in current window:", end=" ")
    [print(frame, end=" ") for frame in window if frame != -1]
    print()
    for i in window:
        if i >= 0:
            t = threading.Thread(target=send, args=(i, sleepvar))
            threadList.append(t)
            t.start()
            r = threading.Thread(target=receiver, args=(i, sleepvar))
            ReceiveList.append(r)
            r.start()
            sleepvar += 1
    for i in threadList:
        i.join()
    for r1 in ReceiveList:
        r1.join()
print(f"Receiver received : {finalreceive}")
