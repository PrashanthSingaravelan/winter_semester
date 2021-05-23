def Sum_Subset(index,list_total,weight):
    if sum(list_total)==weight:
        print(*list_total)
        return
    
    elif sum(list_total)>weight:
        return 
    
    else:
        for i in range(index,len(list1)):
            list_total.append(list1[i])
            Sum_Subset(i+1,list_total,weight)
            list_total.pop()

if __name__ == '__main__':
    list1 = list(map(int,input("Enter the elements : ").split()))
    weight= int(input("Enter the total weight : "))
    list_total = []
    print("The possible weighs are : ")
    Sum_Subset(0,list_total,weight)


    