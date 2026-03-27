userCount = int(input("Enter the number of users: "))
usernameList = []
userItemDict = dict()
uniqueItems = set() #holds unique items
listOfSets = list()
commonItems = set() #holds common items
unionOfSets = set() #holds all items

for i in range(userCount):

    username = input("Enter username: ")
    usernameList.append(username)

    print("How many items? ")
    itemCount = int(input())
    itemList = []

    for j in range(itemCount):
        print("Item ", j + 1 , ": ", end='')
        itemName = input()
        itemList.append(itemName)

    userItemDict[username] = itemList

for i in range(userCount):
    set1 = set(userItemDict[usernameList[i]])
    listOfSets.insert(i, set1)

commonItems = listOfSets[0]
for i in range(len(listOfSets)):
    commonItems = commonItems.intersection(listOfSets[i]) #finds common items

unionOfSets = listOfSets[0]
for i in range(len(listOfSets)):
    unionOfSets = unionOfSets.union(listOfSets[i])

uniqueItems =  unionOfSets.difference(commonItems) #finds unique items


print("USER DATA: ")
for i in range(len(usernameList)):
    print(usernameList[i], " -> ", userItemDict[usernameList[i]])

print("COMMON ITEMS: ")
for i in commonItems:
    print(i)

print("UNIQUE ITEMS: ")
for i in uniqueItems:
    print(i)

print("MOST POPULAR ITEM: ")