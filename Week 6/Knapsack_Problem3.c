#include <stdio.h>

int max(int a, int b) { return (a > b)? a : b; }

int knapsack(int W, int wt[], int v[], int n)
{
   int i, w;
   int K[n+1][W+1];

   for (i = 0; i <= n; i++){
       for (w = 0; w <= W; w++){
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(v[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}

    int main()
{
    int v[] = {30, 40, 45, 77, 90};
    int wt[] = {5, 10, 15, 22, 25};
    int  W = 60;
    int n = sizeof(v)/sizeof(v[0]);
    printf("Maximum Profit:%d", knapsack(W, wt, v, n));
    return 0;
}
