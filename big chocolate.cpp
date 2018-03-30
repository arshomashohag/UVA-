 #include<stdio.h>
 
 int main(void)
 {
  int m,n,cut;
  
  while(scanf("%d%d",&m,&n)==2)
  {
   cut=(m-1)+m*(n-1);//cut=m*n-1 is also right.
   
   printf("%d\n",cut);
   
  }
  return 0;
 }
