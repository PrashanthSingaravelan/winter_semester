import socket as soc

HEADER = 64
PORT = 9999
FORMAT = "utf-8"
DISCONNECT_MESSAGE = "Disconnect !"
SERVER = soc.gethostbyname(soc.gethostname())
ADDR = (SERVER, PORT)
client = soc.socket(soc.AF_INET, soc.SOCK_STREAM)
client.connect(ADDR)


def send(msg):
    message = msg.encode(FORMAT)
    msg_length = len(message)
    send_length = str(msg_length).encode(FORMAT)
    send_length += b' ' * (HEADER - len(send_length))
    # b' ' -->byte format specifier padding
    client.send(send_length)
    client.send(message)
    msg_length = client.recv(HEADER).decode(FORMAT)

    msg_length = int(msg_length)
    msg = client.recv(msg_length).decode(FORMAT)
    print(msg)


send("Hello, this is Prashanth !")
input()
send("Connection Success !")
input()
send("Successful Done !")
send(DISCONNECT_MESSAGE)
