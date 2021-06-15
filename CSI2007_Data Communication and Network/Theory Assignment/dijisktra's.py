maxint = 100
class Graph():

    def __init__(self, vertices):
        self.V = vertices  # initializing the vertex
        self.graph = [  # initializing the graph
            [0 for column in range(vertices)]
            for row in range(vertices)]

    def printSolution(self, dist):
        print("Vertex \tDistance from Source")
        for node in range(self.V):
            print(node, "\t", dist[node])

    def minimum_distance(self, dist, sptSet):
        min = maxint
        for v in range(self.V):
            if (dist[v] < min and sptSet[v] == False):
                min = dist[v]
                min_index = v
        return min_index

    def dijkstra(self, src):
        dist = [maxint] * self.V
        dist[src] = 0
        sptSet = [False] * self.V

        for i in range(self.V):
            u = self.minimum_distance(dist, sptSet)
            sptSet[u] = True
            for v in range(self.V):
                if (self.graph[u][v] > 0 and sptSet[v] == False and dist[v] > dist[u] + self.graph[u][v]):
                    dist[v] = dist[u] + self.graph[u][v]
        self.printSolution(dist)


if __name__ == "__main__":
    n = int(input("Enter the vertices : "))
    initial_vertex = 0
    g = Graph(n)  # initializing an empty graph
    print("\nEnter the adjacency matrix")
    adjacency_matrix = []
    temp = []

    for j in range(n):
        temp = list(map(int, input().split()))
        adjacency_matrix.append(temp)

    g.graph = adjacency_matrix
    g.dijkstra(initial_vertex)
