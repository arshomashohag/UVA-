#include<bits/stdc++.h>

using namespace std;



int u, v, a, b, n, p, r, i, j,k, s, d, t, res, cn=1,par[105], rnk[105];

int dp[102][102];

int main(void)
{

 while(scanf("%d%d",&n, &r) && (n||r)){


   for(i=0; i<=n; i++){
    for(j=0; j<=n; j++)
        dp[i][j]=0;
   }
   for(i=1; i<=r; i++){
     scanf("%d%d%d",&a,&b,&p);
      dp[a][b]= p ;
      dp[b][a]= p ;
   }


   for(k=1; k<=n; k++){
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            dp[i][j]=max(dp[i][j], min(dp[i][k], dp[k][j]));
        }
    }
   }
  scanf("%d%d%d", &s, &d, &t);
   res = dp[s][d]-1;

  printf("Scenario #%d\nMinimum Number of Trips = %d\n",cn++, (t%res ? (t/res)+1 : t/res) );
 printf("\n");


 }



    return 0;
}
