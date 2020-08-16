#include <stdio.h>

unsigned long long fibo(int num);


int main()
{
    int num;
    unsigned long long fibonacci;
    scanf("%d", &num);

    fibonacci = fibo(num);

    printf("%d fibonacci term is %llu", num, fibonacci);

    return 0;
}

unsigned long long fibo(int num)
{
    if(num == 0)
        return 0;
    else if(num == 1)
        return 1;
    else
        return fibo(num-1) + fibo(num-2);
}

/*Analysis:

1st number ->0
2nd number->1
N th fibo = sum previous 2 number

3rd = 1st + 2nd = 0 + 1 = 1
4th = 3rd + 2nd = 1 + 1 = 2
5th = 4th + 3rd = 2 + 1 = 3

Int fibo[10]; //array size
fibo [0] = 0;    //array index
fibo [1] = 1; //array index
fibo [2] = fibo [2 - 1] + fibo [2 - 2] = 1 + 0 = 1
fibo [3] = fibo[3 - 1] + fibo [3 - 2]= fibo[2] + fibo[1] = 1 + 1 = 1
fibo[4] = fibo[4 - 1] + fibo[4 - 2]= fibo[3] + fibo[2] = 2 + 1 = 3

Int fibo[11];
Fibo[0] = 0;
Fibo[1] =1;
for(i=2; i<11; i++)//n=10
Fibo[i] = fibo[i - 1] + fibo[i - 2]
Fibo[3] = fibo[3 - 1] + fibo[3 - 2]= fibo[2] + fibo[1] = 1 + 1 = 2

nth  fibo number time complexity O(N)

*/


