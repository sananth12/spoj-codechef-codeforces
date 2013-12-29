def power(x,y):
	res=1
	while(y>0):
		if y%2==1:
			res=(res*x)%1000000007
		x=(x*x)%1000000007
		y=y/2
	return res%1000000007

def dec_to_bin(x):
    return int(bin(x)[2:])

t=input()
while t>0:
	n=(input())
	n=dec_to_bin(n)
	ans=power(2,n)
	ans=(ans*ans)%1000000007
	print ans
	t=t-1
