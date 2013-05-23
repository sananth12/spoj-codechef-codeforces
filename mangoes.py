t=int(input())
while t>0:
    n=int(input())
    if(n%2==0):
        s=((n*n-2*n+1)/4)%n;
    else:
        s=((n-2)*(n-2)/4)%n;
    print(s)
    t=t-1
