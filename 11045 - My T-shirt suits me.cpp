 #include<stdio.h>
 
 char t_shirt[40][10];
 
 int main(void)
 {
  int n,i,j,count,flag,N,M,xl,xxl,xs,s,m,l,k,br;
  while(scanf("%d",&n)==1)
  {
    for(count=1;count<=n;count++)
    {
     scanf("%d%d",&N,&M);
      br=0;
      if(N<6 && n<m)
        {
         br=1;
        }
     xl=0;
     l=0;
     xxl=0;
     xs=0;
     m=0;
     s=0;
     for(i=0;i<M;i++)
     {
      scanf(" %[^\n]",t_shirt[i]);
      k=0;
       for(j=1;j<=2;j++)
       {
        if(t_shirt[i][k]=='S')
       	  {
       	   s++;
       	    k=k+2;
       	  }
       	 else if(t_shirt[i][k]=='L')
       	  {
       	   l++;
       	   k=k+2;
       	  }
       	else if(t_shirt[i][k]=='M')
       	  {
       	   m++;
       	   k=k+2;
       	 }
       	else if(t_shirt[i][k]=='X')
       	 {
       	  if(t_shirt[i][k+1]=='X') 
			{
			xxl++;
       	    k=k+4;
			}
			else if(t_shirt[i][k+1]=='S')
			{
			 xs++;
			 k=k+3;
			}
			else if(t_shirt[i][k+1]=='L')
			{
			 xl++;
			 k=k+3;
			}
       	  }
       }
     }
     flag=N/6;
     if(br)
     printf("NO\n");
     else if(xxl<=flag && xl<=flag && xs<=flag && l<=flag && m<=flag && s<=flag)
     printf("YES\n");
     else  
     printf("NO\n");
    }
  }
  return 0;
 }
