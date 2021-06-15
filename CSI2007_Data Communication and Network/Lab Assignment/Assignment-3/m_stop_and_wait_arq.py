import threading
import time
import random

def thread_make(y):
    x = 0
    while(x < (4)):
        time.sleep(1)
        x += 1

def receiver(z):
    global rn
    time.sleep(2)
    y = random.randrange(0, 50) % 7
    if (y != 0):
        print(f"Ack{z+1}")
        rn += 1
        receiverlist.append(z)
    else:
        print(f"____ -->Acknowledgement lost")

receiverlist = []
frames = [0, 1, 2, 3, 4, 5, 6]
sf = 0
rn = 1

while(sf < len(frames)):
    if(sf < rn):
        print(f"Transmitting frame-{sf}....")
    else:
        sf -= 1
        print(f"ReTransmitting frame-{sf}....")
    t = threading.Thread(target=thread_make, args=(sf,))
    t.start()
    r = threading.Thread(target=receiver, args=(sf,))
    r.start()
    t.join()
    r.join()
    # time.sleep(1)
    sf += 1
print(f"Receiver received : {receiverlist}")
