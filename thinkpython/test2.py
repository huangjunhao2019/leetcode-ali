def solve():
    for i in range(100):
        for j in range(i,100):
            num1=(i*j)%40
            num2=(i%5)*(j%5)%5
           # print(str(num1)+" "+str(num2))
            if(num1!=num2):
                print(str(i)+" "+str(j))
                print(str(num1)+" "+str(num2))
                return
            
solve()