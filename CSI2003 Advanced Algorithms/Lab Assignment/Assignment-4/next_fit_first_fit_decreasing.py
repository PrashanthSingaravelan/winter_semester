def nextfit(weight, c):
    bins = 0
    bin_list = [[]]
    remainder = c
    for i in range(len(weight)):
        # check if the current items fits in the previous bin
        if remainder >= weight[i]:
            remainder = remainder - weight[i]
            bin_list[bins].append(weight[i])
        else:
            bin_list.append([])
            bins += 1
            remainder = c - weight[i]
            bin_list[bins].append(weight[i])
    return bin_list


def firstfit_decreasing(weight, c):
    # sort the items in  descending order
    weight = sorted(weight, reverse=True)
    bins = 0
    bin_list = [[]]
    remainder = c
    for i in range(len(weight)):
        if remainder >= weight[i]:
            remainder = remainder - weight[i]
            bin_list[bins].append(weight[i])
        else:
            bin_list.append([])
            bins += 1
            remainder = c - weight[i]
            bin_list[bins].append(weight[i])
    return bin_list


def display(list1):  # display the items bin wise
    length = len(list1)
    print(f"{length}\nitems will be fit in below manner : ")
    for i in range(len(list1)):
        print(f"Bin-{i+1} -->  ", end='')
        print(*list1[i])


if __name__ == '__main__':
    weight = [2, 5, 4, 7, 1, 3, 8]
    c = 10
    result_nextfit = nextfit(weight, c)
    print("Number of bins required in Next Fit :", end=' ')
    display(result_nextfit)
    print("---------------------------------------------------------")
    result_firstfit_Dec = firstfit_decreasing(weight, c)
    print("Number of bins required in First Fit Decreasing :", end=' ')
    display(result_firstfit_Dec)
