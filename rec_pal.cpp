 #include<stdio.h>
 
 int main(void)
 {
  unsigned long long int pal,p[10000],temp;
  int n,b,a,count;
   
  while(scanf("%d",&n)==1)
   {
   for(a=0;a<n;a++)
   scanf("%llu",&p[a]);

  for(b=0;b<n;b++)
   {
     count=0;
    while(p[b])
     {
     pal=0;
     temp=p[b];
     while(temp)
     {
      pal=pal*10 + temp%10;
      temp=temp/10;
     }
    if(pal==p[b])
     break;
    else
    {
     p[b]=pal+p[b];
     count++;
    }
    }
  printf("%d %llu\n",count,p[b]);
 }
}
return 0;
}
