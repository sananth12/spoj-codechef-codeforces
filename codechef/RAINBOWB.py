n=int(input())

if n<13:
    print 0
elif n<=14:
    print 1
else:
    ans=0
    r =  (n-13)/2
    while r>0:
        ans += ((r+5)*(r+4)*(r+3)*(r+2)*(r+1))/120
        r-=1
    print (ans+1)%1000000007
        
