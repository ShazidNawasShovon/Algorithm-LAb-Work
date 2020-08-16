#include<stdio.h>
void coin_change(int coin[],int totalCoin,int change)
{
    int m[change+1],minimum,i,j;
    m[0]=0;
    for(i=1; i<=change; i++){
        minimum=change+1;
        for(j=0; j<totalCoin; j++){
            if(coin[j]<=i){
                    if(m[i-coin[j]]+1 < minimum)
                    minimum= m[i-coin[j]]+1;
            }
        }
        m[i]=minimum;
    }
    if(m[change]==0)
        printf("Change is not possible\n");
    else
      printf("Coin need: %d \n",m[change]);
}
     int main(){
    int i,totalCoin=3,change=16;
    int coin[3]={1,5,10};
    coin_change(coin,totalCoin,change);

    return 0;
}
