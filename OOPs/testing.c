#include<stdio.h>
#include<stdlib.h>

void print(int a)
{
   if(a==0)
   {
      return;
   }
   else{
   printf("Trilokesh Das \n");
   a--;
   print(a);
   }
}
int main(){
   print(5);
   return 0;
}