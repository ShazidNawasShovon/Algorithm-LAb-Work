#include <stdio.h>
void main()
{

    int i, j, a, n, number[30],sum=0,sum1=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);

    for (i = 0; i < n; ++i) {
    for (j = i + 1; j < n; ++j){
   if (number[i] > number[j]) {
   a =  number[i];
   number[i] = number[j];
   number[j] = a;
 }
  }
   }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
    printf("%d\n", number[i]);
     for (i = 0; i < n; ++i){
      sum+=number[i];
     }
     printf("Sum: %d",sum);
     while(sum!=0){
        sum1 += sum % 10;
        sum = sum/10;
    }
    printf("\nDigit Sum: %d",sum1);
}
