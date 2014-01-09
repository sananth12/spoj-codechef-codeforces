t=int(input())
while ( t>0):
        n=int(raw_input())
	l=map(int,raw_input().split(" "))
	a,b,c=map(int,raw_input().split(" "))
	s=raw_input()
	pos=0
	front=0
	back=n-1
	vec=1
	add=0
	mul=1
	answer=""
	for i in range(n):
	     if(s[i]=='A'):
             	add = add + a
       	     elif(s[i]=='M'):
                add = (add*b)%c
                mul = (mul*b)%c
             elif(s[i]=='R'):
                if vec==1:
                    vec=-1
                    pos=back
                else:
                    vec=1
                    pos=front
             l[pos]= (l[pos]*mul)%c
             l[pos]= (l[pos]+add)%c

             answer= answer+ str(l[pos]) + " "

             pos = pos+vec

             if vec==1:
            	front = front+1
             else:
            	back = back-1

    	print answer
    	t=t-1
