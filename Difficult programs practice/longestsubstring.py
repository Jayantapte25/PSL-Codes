#abcabbbabc

s = "abcabbbabc"
list = []

for i in s:
    if i not in list:
        list.append(i)
    else:
        list.empty()

print(list.__len__())