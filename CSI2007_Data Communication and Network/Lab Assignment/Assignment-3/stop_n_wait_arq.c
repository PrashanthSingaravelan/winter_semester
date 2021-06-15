#include<stdio.h>

void from_network_layer(packet *);
void to_network_layer(packet *);

void from_physical_layer(packet *);
void to_physical_layer(packet *);

void wait_for_event_sender(event_type *);
void wait_for_event_receiver(event_type *);


typedef struct {
    int kind;
    int seq;
    int ack;
    packet info;
    int err;
}frame;
frame DATA;
typedef enum(frame_arrival,err,timeout,no_event) event_type;

void from_network_layer(packet *buffer) {
        (*buffer.data) = i;   // stores the packet number
        i++;                            // increments the packet number
        }

void sender() {
            static int Sn=0;  // sequence number of frames
            static frame s;
            packet buffer;
            event_type event;
            static int flag=0;

            if (flag==0)  {
                from_network_layer(&buffer);  // 1) Data must be sent from the network layer to physical layer
                s.info = buffer;           // store the frame
                s.seq = Sn;                 // adding the sequence number
                printf("\n Sender : Info = %d  with seqno = %d",s.info,s.seq);  // sending the frame to the receiver
                turn = 'r';                            // now the turn is for receiver
                to_physical_layer(&s);   // send the frame to the receiver via physical layer
                flag = 1;                             // un-till we receive the acknowledgment we are not going to send the next-frame
            }
            wait_for_event_sender(&event);

            if (turn=='s') {   // if the turn is for the sender
                    if (event==frame_arrival) {      // 2) when the acknowledgment is received
                        from_network_layer(&buffer);
                        inc(Sn);                                    // increment the sequence number
                        s.info = buffer;
                        s.seq  = Sn;
                        printf("\n Sender : Info = %d  with seqno = %d",s.info,s.seq);      // sending the frame to the receiver
                        turn = 'r';
                        turn = 'r';                            // now the turn is for receiver
                        to_physical_layer(&s);  // send the frame to the receiver via physical layer
                    }

                    if (event == timeout) {            // 3) when the timer was expired
                        printf("Sender : Resending the frame once again");
                        turn = 'r';                               // now the turn is for receiver
                        to_physical_layer(&s);      // send the frame to the receiver via physical layer
                    }
            }
}

void receiver() {
    static int rn=0;
    frame fr,fs;
    event_type event;

    wait_for_event_receiver(&event);
    if (turn=='r'){  // receiver's turn
            if (event==frame_arrival) {      // if we receive a non-corrupted frame
                from_physical_layer(&fr);
                if(fr.seq==Rn) {                                // if (Rn==Sn)
                        to_network_layer(&r.info);
                        inc(Rn);                                      // Rn will point to the next frame
                        }
                else {
                    printf("\n Receiver : Duplicate from acknowledgement resent \n");

                    turn = 's';
                    to_physical_layer(&fs);
                }

                if(event==err)  {      // if we receive the corrupted frame
                    printf("\nReceiver : Corrupted frame"\n);
                    turn = 's';
                    to_physical_layer(&fs);
                }
            }
    }
}



}
int main()   {

while(!DISCONNECT) {
    sender();   // 1) sender
    for(long int i=0;i<1000000;i++);  // infinite loop --> indicates the delay
    receiver();  // 2)receiver
}
return 0;
}
