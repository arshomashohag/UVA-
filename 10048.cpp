#include<bits/stdc++.h>
#define M 100000
using namespace std;



int c, s, q, i, j,c1, c2, d,  k, x, y, res, cn=1;
int dp[103][103];

int main(void)
{

 while(scanf("%d%d%d",&c,&s,&q) && (c||s||q) ){

   if(cn>1)
    printf("\n");

  for(i=1; i<=c; i++){
    for(j=1; j<=c; j++)
    {
        dp[i][j]=M;
    }
  }

  for(i=1; i<=s; i++){
    scanf("%d%d%d",&c1, &c2, &d);
    dp[c1][c2]=d;
    dp[c2][c1]=d;
  }

  for(k=1; k<=c; k++){
    for(i=1; i<=c; i++){
        for(j=1; j<=c; j++){
            dp[i][j]=min(dp[i][j], max(dp[i][k], dp[k][j]));
        }
    }
  }
 printf("Case #%d\n", cn++);
  for(i=1; i<=q; i++){
    scanf("%d%d",&c1, &c2);
     if(dp[c1][c2]==M)
        printf("no path\n");
     else
        printf("%d\n", dp[c1][c2]);


  }

 }


    return 0;
}
