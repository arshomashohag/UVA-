#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>

using namespace std;

long long int n, i, j, lim, t, cn=1;
int prime[2005];
char ar[2005], ch;
bool flag;


int num[12];
int Big[30];
int small[30];

void seive(void)
{
  lim = sqrt(2005);
  prime[0]=1;
  prime[1]=1;

  for(i=2;i<=lim;i++)
  {
      if(prime[i]==0)
      {
          j=2;
          while((j*i)<=2005)
          {
              prime[j*i]=1;
              j++;
          }
      }
  }
}


int main(void)
{

memset(prime,0,sizeof(prime));
seive();


  scanf("%lld",&t);

  while(t--)
  {
     getchar();
     memset(num,0,sizeof(num));
     memset(Big,0,sizeof(Big));
     memset(small,0,sizeof(small));

     scanf("%[^\n]",ar);

     lim = strlen(ar);

     for(i=0;i<lim;i++)
     {
         ch = ar[i];
       if(isalpha(ch))
       {
           if(ch>=65 && ch<=90)
            Big[ch-65]++;
           else
            small[ch-97]++;
       }
       else
        num[ch-48]++;
     }
     flag =  false;
     printf("Case %lld: ",cn++);
     for(i=0;i<=9;i++)
     {
       if(prime[ num[i] ]==0)
       {
           printf("%d",i);
           flag = true;
       }
     }

     for(i=0;i<=25;i++)
     {
       if(prime[ Big[i] ]==0)
       {
           printf("%c",65+i);
           flag = true;
       }
     }

     for(i=0;i<=25;i++)
     {
       if(prime[ small[i] ]==0)
       {
           printf("%c",97+i);
           flag = true;
       }
     }

     if(!flag)
        printf("empty");

     printf("\n");

  }


    return 0;
}
