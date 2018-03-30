 #include<stdio.h>
 #include<stdlib.h>
 
 int cmfunc(const void *a,const void *b)
 {
   return *(int *)b-*(int *)a;
 }
 
int str[200000];

 int main(void)
 {
  unsigned long long int S,sum,j;
   long int N,i;

while(scanf("%ld%llu",&N,&S)==2)
{
 for(i=0;i<N;i++)
  scanf("%d",&str[i]);
 
 qsort(str,N,sizeof(int),cmfunc);
 
 sum=0;
 j=0;
while(sum<S)
{
 sum=sum+str[j];
 j++;
}
printf("%llu\n",j);
}
return 0;
 }
