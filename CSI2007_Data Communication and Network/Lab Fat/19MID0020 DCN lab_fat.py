import pandas as pd
from pandas import DataFrame

graph = {'A': {'B': 5, 'C': 15},
         'B': {'A': 5, 'C': 9},
         'C': {'A': 15, 'B': 9}
         }

nodes = list(graph.keys())
routing_table = []

for p, q in enumerate(nodes):

    visited_node = []
    not_visited_node_node = nodes.copy()
    next_node = len(nodes) * ['']

    inf = float('inf')
    shortest_distance = len(nodes) * [inf]

    root_node = q
    current_node = q
    shortest_distance[ord(current_node) - 65] = 0

    while True:
        for i in list(graph[current_node].keys()):
            if i not in visited_node:
                if shortest_distance[ord(current_node) - 65] + graph[current_node][i] < shortest_distance[ord(i) - 65]:
                    shortest_distance[ord(
                        i) - 65] = shortest_distance[ord(current_node) - 65] + graph[current_node][i]
                    if current_node != root_node:
                        next_node[ord(i) - 65] = current_node

        visited_node.append(current_node)
        not_visited_node_node.remove(current_node)

        if len(not_visited_node_node) == 0:
            break

        unvstd_aasci = [ord(x) for x in not_visited_node_node]
        min_value = min([shortest_distance[j - 65] for j in unvstd_aasci])
        min_index = [j for j, x in enumerate(
            shortest_distance) if x == min_value]
        for j in min_index:
            if chr(65 + j) in not_visited_node_node:
                current_node = chr(65 + j)
                break

    for i in range(len(next_node)):
        if next_node[i] == root_node:
            next_node[i] = ''

    routing_table.append(DataFrame(
        {'To': list(graph.keys()), 'Cost': shortest_distance, 'Next': next_node}))

    print(f"\n\nRouting table for {root_node}")
    display(routing_table[-1])

print(f"\n\nAvailable nodes ==> {nodes}")


start = input("\nEnter the starting node : ")
while start not in nodes:
    print("Invalid Node....Try again")
    start = input("Enter the start node : ")


dest = input("\nEnter the Destination node : ")
while dest not in nodes:
    print("Invalid Node....Try again")
    dest = input("Enter the Destination node : ")


index = ord(start) - 65
df = routing_table[index]
path = []
path.append(start)
temp = dest
while df[df['To'] == temp]['Next'].values[0] != '':
    path.insert(1, df[df['To'] == temp]['Next'].values[0])
    temp = df[df['To'] == temp]['Next'].values[0]

print("\nOptimal path : ", end="")
for i in range(len(path)):
    print(path[i], end=" ==> ")
print(dest)
