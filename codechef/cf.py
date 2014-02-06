t=int(input())
while t>0:
	a,b=raw_input().split()
	print int(a,int(max(a))+1)+int(b,int(max(b))+1)
	t=t-1
