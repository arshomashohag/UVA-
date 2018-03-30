#include<cstdio>
#include<cstdlib>
#define lld long long int

using namespace std;

lld ar[10005],i,j,mid,l=0,ri=0,n,ele=0,median;

void array_in(lld a)
{
  for(i=l;i>0;i--)
    if(ar[i-1]>a)
      ar[i]=ar[i-1];
     else
        break;

  ar[i]=a;
  l++;
}



int main(void)
{
    while(scanf("%lld",&n)==1)
    {
        array_in(n);

         mid=l/2;
         if(l%2==0)
            median=( ar[mid] + ar[mid-1])/2;
         else
            median=ar[mid];

         printf("%lld\n",median);
    }
    return 0;
}



