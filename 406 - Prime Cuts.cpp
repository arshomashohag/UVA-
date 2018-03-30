#include<cstdio>
#include<cstring>

int kep[10000];
bool arr[10000];
int main(void)
{
    int n,i,num,j,lim,coun,k,pr;
   while(scanf("%d%d",&n,&lim)==2)
   {
    memset(arr,0,sizeof(arr));
   coun=0;
   k=1;

  kep[0]=1;
   for( i=2;i<=n;i++)
   {
    if(arr[i]==0)
         {
        coun++;
         kep[k]=i;
         k++;
         }
        num=i;
        j=2;
    while((num=i*j)<=n)
    {
      arr[num]=1;
      j++;
    }
   }
coun++;
printf("%d %d:",n,lim);
   if(coun%2)
   {
       pr=lim*2-1;
     if((coun-1)>pr)
     {
       i=((coun-pr)/2);
       for(i;pr--;i++)
        printf(" %d",kep[i]);
     }
     else
        for(i=0;i<coun;i++)
        printf(" %d",kep[i]);
   }


   else
    {
       pr=lim*2;
     if((coun-1)>pr)
     {
       i=((coun-pr)/2);
       for(i;pr--;i++)
        printf(" %d",kep[i]);
     }
     else
        for(i=0;i<coun;i++)
        printf(" %d",kep[i]);
   }
   printf("\n");
   delete [] arr;
   }
   return 0;
}

