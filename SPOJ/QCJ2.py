n=input()
while(n!=0):
    ans=1
    i=1
    while (i<=n):
        ans = ans*(n+i)/i
        i+=1
    ans = ans/i
    ans = ans%761238923;
    print ans
    n=input()
