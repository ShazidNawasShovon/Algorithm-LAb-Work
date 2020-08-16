#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[]={1,2,3,4,5,6};
   int key=4;
   int i;
   for(i=0;i<=5;i++){
       if(a[i]==key){
           printf("Found at %d Position\n",i);
           return 0;
       }
   }
   printf("not found\n");
   return 0;
}
