import numpy as np

list1 = [ [1,1,0,0,1,1,1] ,
          [1,0,1,1,1,0,1] , 
          [0,1,1,1,0,0,1] , 
          [0,1,0,1,0,0,1]    ]


hor_list1 = np.array(list1)    ## horizontal list of elements
row,column = hor_list1.shape
print("Number of rows : ",row)
print("Number of columns : ",column)

ver_list1  = []     ## vertical list of elements
temp_list1 = []
for i in range(column):
    for j in range(row):
           temp_list1.append(hor_list1[j][i])
    ver_list1.append(temp_list1)
    temp_list1 = []    
ver_list1 = np.array(ver_list1)

## parity for the horizontal list
sum1 = hor_list1.sum(-1) ## row by row sum
hor_parity = [0 if i%2==0 else 1 for i in sum1]

## parity for the vertical list
sum1 = ver_list1.sum(-1)  ## row by row sum
ver_parity = [0 if i%2==0 else 1 for i in sum1]

## parity of parity
if np.sum(ver_parity)%2==0:
    ver_parity.append(1)
else:
    ver_parity.append(1)

hor_list1 = np.insert(hor_list1,-1,hor_parity,axis=1)

for i in hor_list1:
    print(*i,end='      ')
for j in ver_parity:
    print(j,end=' ')