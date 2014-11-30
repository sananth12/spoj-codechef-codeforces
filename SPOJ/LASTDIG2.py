t=input()
while t>0:
	a,b=raw_input().split()
	a=int(a)
	b=int(b)
	b= b%10
	print (a**b)%10
	t-=1
