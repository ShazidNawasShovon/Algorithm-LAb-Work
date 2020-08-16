#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[]={202,104,304,223,453,123};
   int search = 304;
   int i;

   for(i=0;i<=5;i++){
       if(a[i] == search){
           printf("Position = %d row\n",i);
           return 0;
       }
   }
   printf("product not available\n");
   return 0;
}
