#include <stdio.h>
#include <string.h>
#include <malloc.h>
char str1[100][100],str2[100][100];
char *substring(char *string, int position, int length) 
{
   char *pointer;
   int c; 
   pointer = malloc(length+1);
   for (c = 0 ; c < position -1 ; c++) 
      string++; 
 
   for (c = 0 ; c < length ; c++)
   {
      *(pointer+c) = *string;      
      string++;   
   }
 
   *(pointer+c) = '\0';
 
   return pointer;
}
int main() 
{   
   int t;
   scanf("%d",&t);
   while(t--)
   {            
   char string[100], *pointer;
   int position = 1, length = 1, temp, string_length;
   scanf("%s",&string);
 
   temp = string_length = strlen(string);
 
   printf("Substring of \"%s\" are\n",string);
 
   
   while (position <= string_length)
   {
      while (length <= temp)
      {
         pointer = substring(string, position, length);
         printf("%s\n", pointer);
         free(pointer);
         length++;
      }
      temp--;
      position++;
      length = 1;
   }
 }
 
 
 
   return 0;
}
