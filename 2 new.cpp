#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define lld long long int

using namespace std;

lld n,m,i,j,k=0,l=0,x=0,y,flag1,flag2,tr,tc;
int mat[102][102], outm[102][102];

int main(void)
{
  cin>>m>>n;

  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
       cin>>mat[i][j];

   flag1=1;
   flag2=0;
 for(i=0;i<m ;i++)
   {
    for(j=0;j<n;j++)
    {
        tr=1;
        tc=1;
        for(k=0;k<n;k++)
            tr=tr && mat[i][k];
        for(l=0;l<m;l++)
            tc=tc && mat[l][j];


       if(mat[i][j] && !(tc || tr))
        flag1=0;
        if((outm[i][j]=tr&&tc))
           flag2=1;
    }
   }

 if(flag2 && flag1)
    {
        printf("YES\n");

   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        if(j<n-1)
            printf("%d ",outm[i][j]);
        else
            printf("%d",outm[i][j]);

        printf("\n");

   }
    }
 else
    printf("NO\n");

 return 0;
}

