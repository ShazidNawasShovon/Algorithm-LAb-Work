
#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a[]={1,2,3,3,3,4,4,5};
    int key=3,
    i,flag=-1;

    for(i=0;i<=7;i++)
    {
        if(a[i] == key){
            flag=i;
        }
    }
    if(flag == -1)
    printf("Item not found\n");
    else
    printf("Last Occurrence = %d\n",flag);

    return 0;
}
