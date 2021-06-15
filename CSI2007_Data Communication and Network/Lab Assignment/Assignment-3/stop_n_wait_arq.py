import time as t
import random

def stop_n_wait(frame_number,Sn,Rn):
    temp = frame_number
    print("Number of frames : ",frame_number)
    while (frame_number>0):
        print("\nSending the frame : ",Sn)
        n = (random.randint(0,frame_number-1)) % frame_number              

        if (n%frame_number)==0:
            for x in range(1,2):
                print("\nWaiting for {} seconds".format(x))
                t.sleep(x)

            print("No info from the receiver, about frame-{} so resending the frame-{} onceagain".format(Sn,Sn))
            print("Re-Sending frame : ",Sn)  

            n = (random.randint(0,frame_number-1)) % frame_number              
        
        if temp==Rn:
            print("Acknowledgement for the frame : ",Rn)
            print("end")
            break
        
        else:
            print("Acknowledgement for the frame : ",Rn+1)
            ## after successfull transmission, reduce the frame number count
            frame_number = frame_number - 1  
            Sn+=1  ## incrementing the Sn to the next frame
            Rn+=1  ## incrementing the Rn to the next frame


if __name__ == '__main__':
    frame_number = int(input(("Enter the number of frames : ")))
    Sn = 1  ## sender frame-number
    Rn = 1  ## receiver frame-number
    stop_n_wait(frame_number,Sn,Rn)
    