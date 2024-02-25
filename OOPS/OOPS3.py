#Write a program to find the common elements between two lists.

def find_charecter(list1,list2):
    jayant = []
    for i in list1:
        if i in list2:
            jayant.append(i)
    return jayant

list1 = [1,2,3,4,5,6,7,8,9]
list2 = [2,4,6,8,10,12,14,16,18]
result = find_charecter(list1,list2)
print(result)