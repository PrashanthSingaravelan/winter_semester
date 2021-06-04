import socket as soc
import threading as th

'''
1) Pick the port
2) Pick the server
3) Pick the socket
4) Bind the socket
'''
HEADER = 64
PORT = 9999
# or use loopback address [localhost]
SERVER = soc.gethostbyname(soc.gethostname())
# gethostname returns device name  gethostby name returns it ip address
ADDR = (SERVER, PORT)
FORMAT = "utf-8"
DISCONNECT_MESSAGE = "Disconnect !"
RESPONSE_MESSAGE = "Message received successfully...."

# Socket creation
# first argument --> famiily (categories) 2nd -->ways of sending data (protocols)
server = soc.socket(soc.AF_INET, soc.SOCK_STREAM)
# the first argument tells the what type of ip address or type of address that we gonna be accepting or looking for specific connections
server.setsockopt(soc.SOL_SOCKET, soc.SO_REUSEADDR, 1) #for immediate use of that port
server.bind(ADDR)


def handle_client(client_conn, addr):
    print(f"[NEW CONNECTION] {addr} connected.")
    connected = True
    while connected:
        msg_length = client_conn.recv(HEADER).decode(FORMAT)
        # conn.recv() takes argument of length of the msg
        # every time we send msg need to encode in byte format
        if msg_length:
            msg_length = int(msg_length)
            msg = client_conn.recv(msg_length).decode(FORMAT)
            if msg == DISCONNECT_MESSAGE:
                connected = False
            print(f"[{addr}] {msg}")
            response_msg_length = len(RESPONSE_MESSAGE)
            send_length = str(response_msg_length).encode(FORMAT)
            send_length += b' ' * (HEADER - len(send_length))
            client_conn.send(send_length)
            client_conn.send(RESPONSE_MESSAGE.encode(FORMAT))

    client_conn.close()


def start():
    # listen
    server.listen()
    print(f"[LISTENING] Server is listening on {SERVER}")
    while True:  # continue to listen until turn off or it crashes
        # this line waits for new connection to occur & it stores the address as well as the port
        client_conn, addr = server.accept()
        # this function will return the socket_object & address-port tuple
        thread = th.Thread(target=handle_client, args=(client_conn, addr))
        thread.start()
        # to exclude the main thread (this paython program ) we sub 1
        print(f"[ACTIVE CONNECTION] {th.activeCount()-1}")


print("[STARTING] server is starting...")
start()
