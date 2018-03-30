 #include<stdio.h>
 
 int main(void)
 {
	unsigned long long int a,b,c,a2,b2,c2;
	
	while(scanf("%llu%llu%llu",&a,&b,&c)==3)
	{
	  if(a==0 || b==0 || c==0)
	  break;

   a2=a*a;
   b2=b*b;
   c2=c*c;
   if((a2+b2)==c2)
   printf("right\n");
   else if(a2+c2==b2)
    printf("right\n");
    else if(c2+b2==a2)
     printf("right\n");
   else
   printf("wrong\n");
	}
	return 0;
 }
