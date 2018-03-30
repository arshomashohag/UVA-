 #include<stdio.h>
 
 int main(void)
 {
   long long int i,j,temp1,temp2,temp_3,a;
   int c_len1,c_len;
   
   while(scanf("%lld%lld",&i,&j)==2)
   {
	c_len=0;
    temp1=(i<j)?i:j;
    
	if(temp1==i)
	   temp2=j;
	 else
	   temp2=i;
	 for(a=temp1;a<=temp2;a++)
     {
    c_len1=1;
    temp_3=a;
	  while(temp_3!=1)
       {
	   if(temp_3%2)
		temp_3=temp_3*3+1;
		else
		temp_3=temp_3 /2;
		c_len1++;
         }
        if(c_len1>c_len)
        c_len=c_len1;
	   }
 printf("%lld %lld %d\n",i,j,c_len);
  }

return 0;
 }
