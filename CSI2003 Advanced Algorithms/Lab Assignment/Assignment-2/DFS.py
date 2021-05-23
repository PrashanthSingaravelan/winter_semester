class Graph:
    def __init__(self,nVertices):
        self.nVertices = nVertices
        self.adjMatrix = [[0 for i in range(nVertices)] for j in range(nVertices)]
    
    def addEdge(self,v1,v2):
        self.adjMatrix[v1][v2] = 1
        self.adjMatrix[v2][v1] = 1
    
    def removeEdge(self,v1,v2):  ## Before removing, check whether there is an edge
        if self.containsEdge(v1,v2) is False:
            return 
        else:
            self.adjMatrix[v1][v2] = 0
            self.adjMatrix[v2][v1] = 0
    
    def containsEdge(self,v1,v2):   ## if there is an edge,then it will return True
        if self.adjMatrix[v1][v2]>0:
            return True
        else:
            return False
    
    def __str__(self):
        return str(self.adjMatrix)


class DFS(Graph):    
    def __dfsHelper(self,sv,visited):  ## private class
        print(sv,end=' ')
        visited[sv] = True
        for i in range(self.nVertices):
            ## if there is an edge and that edge is not visited
            if (self.adjMatrix[sv][i]>0) and (visited[i] is False):
                self.__dfsHelper(i,visited)        
    
    def dfs(self):
        visited = [False for i in range(self.nVertices)]  ## maintaining a visited array (intially which is 0)
        self.__dfsHelper(0,visited)
    
    def __str__(self):
        return str(self.adjMatrix)