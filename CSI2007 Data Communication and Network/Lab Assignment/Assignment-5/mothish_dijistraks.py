def intConversion(a):
    if a == '_':
        return 9999
    else:
        return int(a)


def select(list1, sv):
    global bool_list, V
    minimum_val = 99
    for i in range(V):
        if bool_list[i] is False and list1[i] < minimum_val:
            minimum_val = list1[i]
    if minimum_val != 99:
        bool_list[list1.index(minimum_val)] = True
        return minimum_val
    else:
        return sv


def minimum(a, b, index, ind_a, ind_b):
    global precedence
    if a < b:
        return a
    else:
        precedence[index] = ind_b
        return b


def routing_table(sv):
    print(f"Routing table of {sv} is ")
    print("Node" + "\t" + "Cost" + "\t" + "Next Router")
    global G, precedence, V
    for i in range(V):
        print(f"{i}\t\t{G[sv][i]}\t\t{precedence[i]}")


V = int(input("Enter the number of Vertices : "))
print("Please Enter the respected details : ")
print("""Caution:
            1) For self-loops enter '0'
            2)If there is no path is between the two vertices enter '_'
            3)Enter the distance from a vertice to all other vertices seperated by comma """)
Adj_list = [list(input(f"Enter the distance from vertex {i} to all : ").split(
    ' ')) for i in range(V)]
G = [list(map(intConversion, i[:V])) for i in Adj_list]
print("The Adjacent Matrix of the Graph is ")
for i in G:
    print(i)
for k in range(V):
    visited = [k]  # N'
    bool_list = [False] * V
    bool_list[k] = True
    precedence = ['-'] * V
    nv = []
    for i in range(V):
        if i not in visited:
            nv.append(i)
    for _ in range(V):
        index_w = select(G[k], k)
        w = G[k].index(index_w)
        if w not in visited:
            visited.append(w)
            nv.remove(w)
            for j in nv:
                G[k][j] = minimum(G[k][j], (G[k][w] + G[w][j]), j, k, w)

    routing_table(k)