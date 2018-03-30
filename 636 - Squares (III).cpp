 #include<stdio.h>
 #include<math.h>
 
 int main(void)
 {
  long long int n,temp,test,i,base;
  
  while(scanf("%lld",&n)==1)
  {
    i=2;
    while(i<100)
    {
     temp=n;
     base=1;
     test=0;
     while(temp)
     {
      test=test+(temp%i)*base;
      base=base*i;
      temp=temp/i;
     }
     if(pow(sqrt(test),2)==test)
     {
     printf("%lld\n",i);
     break;
     }
     i++;
    }
  }
  
  return 0;
 }
