def solve(a):
    for i in range(len(a)):
        a[i]=a[i]+10
def solve2(a):
    a+=10
def main():
    a=10
    solve2(a)
    print(a)
main()
