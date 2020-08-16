
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
  int ara[1001],x;
  ara[0]=0;
  ara[1]=1;
  int n,rem;
   for(int i=2;i<1000;i++){
      ara[i]= (ara[i-1] +ara[i-2] )%10;
  }
  scanf("%d",&n);
  printf("%d",ara[n]);
}

/*

Analysis:
Int fibo[11]
Fibo[0] = 0;
Fibo[1] = 1;
for(int i = 2; i<11; i++) //n time loop
Fibo[ i ] = (fibo [i - 1] + fibo[i - 2] % 10; 15 % 10 = 5  // % modulus

Time Complexity: O(n)
I = 2 Fibo[2] = (fibo[2 - 1] + fibo[2 - 2] % 10;
= (fibo[1] + fibo[0] ) % 10
= (1 + 0) % 10 = 1 % 10 = 1
Fibo[2] = 1
Fibo[7] = 3
Fibo[8] = 1
Fibo[9] = 4

*/

