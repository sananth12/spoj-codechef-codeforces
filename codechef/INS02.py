t=int(raw_input())
while t>0:
	x=int(raw_input())
        a=[]
	max=0
  	while x>0:
		a.append(str(x&1))
		x=x>>1
			
	t=t-1
