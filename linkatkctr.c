#include<stdio.h>
 struct win                                           
{                                                               
      long long data;               
      struct win *next;            
};   
 struct loss                                           
{                                                               
      long long data;               
      struct loss *next;            
      
    
};   

int main()
{
    int t,flag=1;
    long long n,m,t1,t2,i=0,j; 
    scanf("%d",&t);
    struct win *wint,*winhead=NULL;
   struct loss *losst,*losshead=NULL;
   wint = (struct win*)malloc(sizeof(struct win));
    losst = (struct win*)malloc(sizeof(struct win));
    
    while(t--)
    {
         scanf("%lld%lld",&n,&m);
         i=m;
         flag=1;
         while(i--)
         {
             scanf("%lld%lld",&t1,&t2);
             wint->data=t1;
             losst->data=t2;
             wint->next=winhead;
             losst->next=losshead;              
         } 
        struct loss *temp;
         temp=losshead;
        struct win *temp1;
         temp1=winhead;
         i=0;       
         printf("*** %lld ",temp->data);
         while(temp!=NULL)
         {
             if(temp->data==0)
             {
                 if(temp1->data==(n-i))
                 {
                    flag=0;
                    printf("2 %d\n",i);
                    break;
                    
                 }  
             }
             temp=temp->next;
             temp1=temp1->next;
                             
          i++;
           printf("*** %lld ",temp->data);
         }                                                           
      if(flag)       
      printf("1\n");
    
    }
              

return 0;
}
