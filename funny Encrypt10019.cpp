 #include<stdio.h>
 
 unsigned int M[1100],N;
 
 int main(void)
 {
  unsigned int binary_digit,hexa_digit,ini,temporary,get_digit;
  
  scanf("%u",&N);
  
 for(ini=0;ini<N;ini++)
 scanf("%u",&M[ini]);

 for(ini=0;ini<N;ini++)
  {
   binary_digit=0;
   hexa_digit=0;
   temporary=M[ini];
   for(;M[ini];)
   {
	if(M[ini]%2)
	  binary_digit++;
	  
	 M[ini]=M[ini]/2;
	}
   for(;temporary;)
   {
	 get_digit=temporary%10;
	 for(;get_digit;)
      {
	   if(get_digit & 1)
	   hexa_digit++;
	   
	   get_digit=get_digit>>1;
	 }
	 temporary=temporary/10;
   }
   printf("%u %u\n",binary_digit,hexa_digit);
  }
  return 0;
 }
