def Replace(list1):
    for i in range(len(list1)):
        for j in range(len(list1)):
            if (list1[i][j] == 'inf'):
                list1[i][j] = 9999
            elif (list1[i][j] == 9999):
                list1[i][j] = 'inf'
            else:
            	list1[i][j] = int(list1[i][j])
    return(list1)

def FloydWarshall(list1):
    for k in range(len(list1)):
        for i in range(len(list1)):
            for j in range(len(list1)):
                    list1[i][j] = min(list1[i][j] , (list1[i][k] + list1[k][j]))
    return list1

# list1 = [
#      [0,3,'inf',7] , 
#      [8,0,2,'inf'] , 
#      [5,'inf',0,1] , 
#      [2,'inf','inf',0]]

list1 = [['0', '10', '15', '6'],
  		['5', '0', '2', '3'],
  		['3', '6', '0', '1'],
  		['2', '5', '7', '0']]

n = int(input("Enter the number of vertices : "))
print("Please Enter the respected details : ")
print("""Caution:
            1)For self-loops enter '0'
            2)If there is no path is between the two vertices enter 'inf'
            3)Enter the distance from a vertice to all other vertices seperated by comma """)

#list1 = [list(input(f"Enter the distance from vertex {i} to all : ").split(',')) for i in range(n)]

list1 = Replace(list1)
list1 = FloydWarshall(list1)
list1 = Replace(list1)
print(list1)