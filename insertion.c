#include<stdio.h>
void main()
{
    int n=4,i,j,temp;
    int data [4]={5,8,1,6};
    for ( i=0; i<n; i++ )
    {
    j=i;
     // Asc:data[j]<data[j-1]
     // Dsec: data[j]>data[j-1]//
    while(j>0 &&data[j]<data[j-1])
    {
        temp=data[j];
        data[j]=data[j-1];
        data[j-1]=temp;
        j--;
    }
}
        printf("Ascending order:");
        for(i = 0 ; i< n ; i++ )
        {
            printf("%d",data [i]);
        }


}
