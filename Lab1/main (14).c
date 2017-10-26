
#include<stdio.h>
 int y=0;
int o=0;
int u=0;
int swapBits(int n,int p1,int p2)
{
    
     int bit1 =  (n >> p1) & 1;
     int bit2 =  (n >> p2) & 1;
     int x = (bit1 ^ bit2);
    x = (x << p1) | (x << p2);
     int result = n ^ x;
}
 int main()
{   
    scanf("%d%d%d",&y,&o,&u);
    int res =  swapBits(y, o, u);
    printf("\nResult = %d ", res);
    return 0;
}