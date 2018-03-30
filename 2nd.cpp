#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define lld long long int

using namespace std;

lld n,m,i,j,k=0,l=0,x=0,y,flag,tr,tc;
int mat[102][102], outm[102][102];
int save[10004][2];
int zeror[101];
int zeroc[101];
int main(void)
{
  cin>>m>>n;

  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
        cin>>mat[i][j];
        if(mat[i][j])
        {
            save[k][0]=i;
            save[k][1]=j;
            k++;
        }

    }

   }



   flag=0;
 for(i=0;i<k && !flag;i++)
   {
    j=save[i][0];
    l=save[i][1];
    tr=1;
    tc=1;
    for(x=0;x<n;x++)
       if(!mat[j][x])
         tr=0;
    for(x=0;x<m;x++)
       if(!mat[x][l])
         tc=0;
    if(!tr || !tc)
       flag=1;
   }

 if(!flag)
    {
        printf("Yes\n");

    }
 else
    printf("No\n");

 return 0;
}

