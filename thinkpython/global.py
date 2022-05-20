sum=0
def solve1():
    for i in range(10):
        sum+=i
    return sum
testList=[]
def solve2():
    for i in range(10):
        testList.append(i)
solve2()
for num in testList:
    print(num)