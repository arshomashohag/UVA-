 #include<stdio.h>
 
 int main(void)
 {
  unsigned long h_w,O_w;
  
  while(scanf("%lu%lu",&h_w,&O_w)==2)
  {
		  printf("%lu\n",(h_w>O_w)? h_w-O_w: O_w-h_w);
  }
  
  return 0;
 }
