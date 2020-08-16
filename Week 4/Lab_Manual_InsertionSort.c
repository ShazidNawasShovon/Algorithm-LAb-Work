#include <stdio.h>

int main()
{
   int i,j,n,temp;
   double sum=0;
   printf("Enter array size:\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter data:\n");

   for(i=0; i<n; i++){
      scanf("%d",&a[i]);
      sum+=a[i];
    }
   for(i=0;i<n;i++){
       j = i;
       while(j>0){
           if(a[j-1] > a[j]){
               temp = a[j-1];
               a[j-1] = a[j];
               a[j] = temp;
           }
           else{
               break;
           }
           j--;
       }
   }
     printf("Ascending Order:\n");
        for(i=0;i<n;i++)
       printf(" %d\n",a[i]);
       printf("\n");
        printf("Avg %lf\n",sum/n);

   return 0;
}
