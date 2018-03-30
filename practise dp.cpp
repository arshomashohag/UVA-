#include<cstdio>
#include<cstring>
#include<algorithm>

#define MAX_N 1010
#define MAX_W 32

using namespace std;
int n;
int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int cost[MAX_N+1];
int CAP,m,t,res;

int func(int i,int w)
{
if(i==n+1) return 0;
if(dp[i][w]!=-1) return dp[i][w];

int profit1=0,profit2=0;
if(w+weight[i]<=CAP)
profit1=cost[i]+func(i+1,w+weight[i]);

profit2=func(i+1,w);

dp[i][w]=max(profit1,profit2);

return dp[i][w];
}

int main()
{

memset(dp,-1,sizeof(dp));
scanf("%d",&t);
int i;
while(t--)
{
    res=0;
scanf("%d",&n);
for( i=1;i<=n;i++)
{
scanf("%d%d\n",&weight[i],&cost[i]);
}
scanf("%d",&m);
for(i=1;i<=m;i++)
{
memset(dp,-1,sizeof(dp));
scanf("%d",&CAP);
res=res+func(1,0);
}
printf("%d",res);
}
return 0;
}
