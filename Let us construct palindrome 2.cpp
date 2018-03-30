#include<cstring>
#include<cstdio>
#define lld long long int

using namespace std;

char ar[1000006];
lld len,i;
int t,flag;

int main(void)
{
 scanf("%d",&t);
 getchar();

 while(t--)
 {
  scanf("%s",ar);
   int ck[26]={0};
   for(i=0;ar[i];i++)
    ck[ar[i]-97]++;
    flag=0;
    for(i=0;i<26;i++)
    {
        if(ck[i]%2)
            flag++;
    }
      if(flag==1 || flag==2 || flag==0)
        printf("YES\n");
      else
        printf("NO\n");

        getchar();
    }


 return 0;
}

