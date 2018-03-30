#include<cstdio>
#include<cstring>

using namespace std;

int hortal,t,day,p,i,j,cn;
int days[3658];
int main(void)
{
  scanf("%d",&t);
  while(t--)
  {
   scanf("%d%d",&day,&p);
   cn=0;
   memset(days,0,sizeof(days));
   for(i=1;i<=p;i++)
   {
       scanf("%d",&hortal);
       for(j=1;(j*hortal)<=day;j++)
       {
         if((j*hortal)%7!=0 && (j*hortal)%7!=6 && days[j*hortal]==0)
            {
                cn++;
                days[j*hortal]=1;
            }
       }
   }


  printf("%d\n",cn);
  }

  return 0;
}
