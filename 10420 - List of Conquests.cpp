#include<cstdio>
#include<cstring>

using namespace std;
char desh[2001][30],name[30],temp[30];
int i,j,k,n,out;

int main(void)
{
   scanf("%d",&n);
   scanf("\n");
   for(i=0;i<n;i++)
   {
       scanf("%s",desh[i]);
       scanf("%*[^\n]");

   }


    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
          if(strcmp(desh[i],desh[j])>0)
          {
              strcpy(name,desh[i]);
              strcpy(desh[i],desh[j]);
              strcpy(desh[j],name);
          }
        }
    }

   for(i=0;i<n;)
   {
       printf("%s ",desh[i]);
       j=i;
       out=0;
       while(strcmp(desh[i],desh[j])==0)
       {
           out++;
           j++;
       }
       printf("%d\n",out);
      i=j;
   }

   return 0;
}
