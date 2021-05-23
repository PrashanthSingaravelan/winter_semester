def Binary_Search(list1,str2):
    low = 0
    high = len(list1)
    middle = 0

    while(low<=high):
        middle = int((low+high)/2)
        if list1[middle][0]==str2:
            return list1[middle][1]
        if str2<list1[middle][0]:
            high = middle - 1
        else:
            low = middle + 1

if __name__ == '__main__':
	str1 = "if you're not paying for the product, you are the product"
	str2 = "for"
	list1 = str1.split(" ")
	list1 = [(list1[i],i) for i in range(len(list1))]
	list1 = sorted(list1)
	print("{} is present at the index : {}".format(str2,Binary_Search(list1,str2)))
