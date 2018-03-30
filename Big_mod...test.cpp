 #include<stdio.h>
 #define i64 long long int
 
 i64 big_mod(i64 b,i64 p);
 i64 b,p,m,r,div;
 
 int main(void)
 {
  
  while(scanf("%lld%lld%lld",&b,&p,&m)==3)
  {
  	r=(big_mod(b,p))%m;
  	printf("%llu\n",r);
  }
  return 0;
 }
 
 i64 big_mod(i64 b,i64 p)
 {
  i64 ret;
  if(p==0)
   return (1);
  
  else if(p%2==0)
    {
      ret=big_mod(b,p/2);
      return ((ret%m)*(ret%m))%m;
      
    }
    else 
    {
     return ((b%m)*(big_mod(b,p-1)%m))%m;
    }
 }
