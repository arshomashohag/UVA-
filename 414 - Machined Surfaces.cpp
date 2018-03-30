#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,i,j,k,l,out,x;
char in[30];
int ar[30];
int main(void)
{
  while(scanf("%d",&n) && n)
  {
      getchar();
      l=0;
      out=0;
      for(i=0;i<n;i++)
       {
           scanf("%[^\n]",in);
            k=0;

            for(j=0;in[j];j++)
                if(in[j]!=' ')
                 k++;

          ar[l++]=k;
          out=max(out,k);
            getchar();
       }
       k=0;
       for(i=0;i<n;i++)
       {
         k=k+out-ar[i];
       }

       printf("%d\n",k);

  }
  return 0;
}
