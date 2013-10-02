for x in xrange(input()):
 n=input();m=0
 while m<39: 
  q=2**m
  if(2*n/q)%2 and 2*n%q==0:print q
  m+=1
