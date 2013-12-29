s=""
cnt=0
for i in range(0,100001):
	temp=i*i
        flag=1
        while(temp>0):
        
            k=temp%10
            if(k!=0 and  k!=1 and k!= 4 and k!=9 ):
                    flag=0
                    break
                
            temp/=10
        
        if(flag==1):
	      cnt=cnt+1
              s=s+","+str( i*i)

print cnt
