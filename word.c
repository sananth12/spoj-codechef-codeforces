#include <stdio.h>
#include <strings.h>
 
   void hasTrillions(char);
   void hasBillions(char);
   void hasMillions(char);
   void hasThousands(char);
   void hasHundreds(char);  
   void simpleNumber(char);
   void hasTeen(char);
   void hasTens(char); 
 
   main() {
    
   /*Define string, and array of chars..*/
    
      char string[256]; /*max length 255*/
   
      int cPos,t;
      int iterator;
       
      scanf("%d",&t);
      while(t--)
      {
      scanf("%s",&string);
      int len = strlen(string);
      cPos = len;
    
      for(iterator = 0; iterator != len; iterator++) {
       
         if (cPos == 1){
 
                if(string[0] == '0') {
                  printf("zero ");
                  }
 
                simpleNumber(string[len-1]);
                cPos=0;
         }
 
 
       
         if(cPos == 2) {
          
            if (string[len-cPos] == '1'){
               hasTeen(string[len-cPos+1]);
               cPos=0;
               break;}
             
            else if(string[len-cPos]!='1'){
               hasTens(string[len-cPos]);
               cPos--;
            }
          
         }
 
         if(cPos == 3) {
           hasHundreds(string[len-cPos]);
           cPos--;
 
 
           }
 
         if (cPos == 4) {
           hasThousands(string[len-cPos]);
           cPos--;
           }
 
         if (cPos == 5) {
 
 
            if (string[len-cPos] == '1'){
               hasTeen(string[len-cPos+1]);
               cPos = cPos-2;
               printf("Thousand ");
 
            }
             
            if(string[len-cPos]!='1' ){
               hasTens(string[len-cPos]);
 
                if(string[len-cPos] == '0'){
                 printf("Thousand ");
                 }
 
               cPos--;
 
            }
           }
 
         if (cPos == 6) {
           if(string[len-cPos] != '0'){
            hasHundreds(string[len-cPos]);
            }
 
            cPos--;
 
           }
 
         if (cPos > 6) {
 
           switch(len){
             case 7: hasMillions(string[0]);cPos--; break;
             case 8: if(string[0] == '1'){
                     hasTeen(string[1]);
                     printf("Million ");
                     cPos=cPos-2;
                     break;
                     }
 
                     if(string[0] != '1'){
                     hasTens(string[0]);
 
                     cPos--;
                     break;
                     }
 
                     break;
             case 9:  break;
 
            }
 
          }
 
      }
      printf("\n");
      } 
   }
 
 
 
   void hasTens(char x){ 
      switch(x){ 
         case '1':printf("ten ");
            break; 
         case '2':printf("twenty ");
            break; 
         case '3':printf("thirty ");
            break; 
         case '4':printf("fourty ");
            break; 
         case '5':printf("fifty ");
            break; 
         case '6':printf("sixty ");
            break; 
         case '7':printf("seventy ");
            break; 
         case '8':printf("eighty ");
            break; 
         case '9':printf("ninety ");
            break; 
      } 
   } 
 
 
   void hasTeen(char x){ 
      switch(x){
         case '0':printf("ten");
            break;
         case '1':printf("eleven ");
            break; 
         case '2':printf("twelve ");
            break; 
         case '3':printf("thirteen ");
            break; 
         case '4':printf("fourteen ");
            break; 
         case '5':printf("fifteen ");
            break; 
         case '6':printf("sixteen ");
            break; 
         case '7':printf("seventeen ");
            break; 
         case '8':printf("eighteen ");
            break; 
         case '9':printf("nineteen ");
            break; 
      } 
   } 
 
 
   void simpleNumber(char n){
      switch(n){
        /* case '0':printf("Zero ");*/
 
         case '1':printf("one "); 
            break; 
         case '2':printf("two "); 
            break; 
         case '3':printf("three "); 
            break; 
         case '4':printf("four "); 
            break; 
         case '5':printf("five "); 
            break; 
         case '6':printf("six "); 
            break; 
         case '7':printf("seven "); 
            break; 
         case '8':printf("eight "); 
            break; 
         case '9':printf("nine "); 
            break; 
      } 
   } 
 
   void hasHundreds(char x){
      if(x !='0'){
         simpleNumber(x);
         printf("hundred ");
      }
   }
 
   void hasThousands(char x){
      if(x !='0'){
         simpleNumber(x);
         printf("thousand ");
      }
   }
 
   void hasMillions(char x){
      if(x !='0'){
         simpleNumber(x);
         printf("Million ");
      }
   }
 
 
   void hasBillions(char x){
      if(x !='0'){
         simpleNumber(x);
         printf("Billion ");
      }
   }
 
   void hasTrillions(char x){
      if(x !='0'){
         simpleNumber(x);
         printf("Trillion ");
      }
   }
