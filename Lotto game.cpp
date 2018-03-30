#include<cstdio>

int ar[20],n,i,j,k,l,m,o,flag=0;

int main(void)
{
 while(scanf("%d",&n) && n)
 {
     if(flag++)
        printf("\n");
     for(i=0;i<n;i++)
         scanf("%d",&ar[i]);
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             for(k=j+1;k<n;k++)
             {
                 for(l=k+1;l<n;l++)
                 {
                     for(m=l+1;m<n;m++)
                     {
                         for(o=m+1;o<n;o++)
                         {
                             printf("%d %d %d %d %d %d\n",ar[i],ar[j],ar[k],ar[l],ar[m],ar[o]);
                         }
                     }
                 }
             }
         }
     }

 }
 return 0;
}
