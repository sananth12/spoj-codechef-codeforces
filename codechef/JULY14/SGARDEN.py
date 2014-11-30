def GCD(a,b):
    if b==0:
        return a
    else:
        return GCD(b,a%b)
 
def LCM(x,y):
    return (x*y)/GCD(x,y)

t=input()
while t>0:
    n=input()
    a=map(int, raw_input().split())
    visit= [0]*n
    ans=1
    for i in range (0,n):
        if(visit[i]==0):
            tmp=1
            j=a[i]-1;
            visit[i]=1
            while(visit[j]==0):
                tmp+=1
                visit[j]=1
                j=a[j]-1
            ans=LCM(ans,tmp)
    ans=ans%1000000007
    print ans
    t-=1
