import socket as sc
import threading
import time

PORT = 5050
SERVER = sc.gethostbyname(sc.gethostname()) ## ip address of the client's PC
ADDR = (SERVER,PORT)  ## (ip address , port)
HEADER = 60
FORMAT = 'utf-8'
DISCONNECT_MESSAGE = "!DISCONNECTED"

server = sc.socket(sc.AF_INET , sc.SOCK_STREAM)
# sc.AF_INET --> what type of ip addressing is the server accepts
# sc.SOCK_STREAM --> streaming the data via socket 

server.bind(ADDR)

## handles the individual connection between a client and a server
def handle_client(conn,addr):  ## runs for each client
    print("[NEW CONNECTION] {addr} connected.")
    connected = True
    while connected:  ## client will give a message and then we have to display it
        ## before getting the message we must get the message length
        message_length = int(conn.recv(HEADER).decode(FORMAT))
        message = conn.recv(message_length).decode(FORMAT)
        
        ## How the clients will close the connection ???
        if message == DISCONNECT_MESSAGE:
            connected = False
        
        print(f'[{addr} {message}]')
    conn.close()

def start():
    server.listen() ## server is ready to listen to the client
    print(f"[LISTENING] Server is listening on {SERVER}")

    while True : ## server will go on listening untill the server crashes/no client going to come
        ## when a new connection starts 

        conn,addr = server.accept() 
        ## conn --> stores the actual scoket object that allows to send the information back 
        ## addr --> information about the above connection (ip address , port)

        thread = threading.Thread(target=handle_client , args=(conn,addr))
        thread.start()    
        print(f"[ACTIVE CONNECTIONS] {threading.activeCount() -1}")
        ## number of threads --> number of clients connected
        ## start() --> 1st thread
        ## client-1,2,3,... --> 2nd,3rd,4th thread
        ## subtracting -1 will give the exact number of clients involved.

print("[STARTING] server is starting.....")
start()