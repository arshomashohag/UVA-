#include<cstdio>
#include<cstdlib>

int seive[1005]={0},i,j,k,n,c,p;
int prime[1005];

void seive_of_e(void)
{
    j=1;
    prime[0]=1;
   for(i=2;i<=1001;i++)
   {
       k=i+1;
     while(k<=1001)
     {
         if(k%i==0)
            seive[k]=1;
         k++;
     }
     if(seive[i]==0)
       {
           prime[j]=i;
          j++;
       }
   }

}

int main(void)
{
  seive_of_e();

   while(scanf("%d%d",&n,&c)==2)
   {
       k=0;
      for(i=0;i<n;i++)
      {
       if(prime[i]<=n)
            k++;
       else
        break;
      }

  if((c*2)>=k)
  {
      p=k;
      j=0;
  }

    else if(k%2==0)
        {
              p=c*2;
            j=(k-p)/ 2;

        }
      else
        {
            p=c*2-1;
            j=(k-p)/ 2;

        }

      printf("%d %d:",n,c);
      for(i=j;p--;i++)
        printf(" %d",prime[i]);
      printf("\n\n");
   }
  return 0;
}
