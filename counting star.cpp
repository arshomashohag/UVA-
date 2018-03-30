 #include<stdio.h>
 
  char str[150][150];
 int main(void)
 {
  int r,c,i,j,star;
  
  while(scanf("%d%d",&r,&c)==2)
  {
	if(!r && !c)
	break;
	for(i=0;i<r;i++)
	 scanf(" %[^\n]",str[i]);
	 star=0;
	 for(i=0;i<r;i++)
	 {
	   for(j=0;j<c;j++)
	   {

	  if(i>0 && i<r && j>0 && j<c)
	  {
		if(str[i][j]=='*' && (str[i-1][j]!='*' && str[i+1][j]!='*'))
		{
		  if(str[i][j+1]!='*' && str[i][j-1]!='*')
		  {
			if((str[i-1][j-1]!='*' && str[i+1][j+1]!='*') && (str[i+1][j-1]!='*' && str[i-1][j+1]!='*'))
			star++;
		  }
		}
	   }
	 else if(i>0 && i<r )
	  {
		if(str[i][j]=='*' && (str[i-1][j]!='*' && str[i+1][j]!='*'))
		{
		  if(str[i][j+1]!='*' && str[i][j-1]!='*')
		  {
			if((str[i-1][j-1]!='*' && str[i+1][j+1]!='*') && (str[i+1][j-1]!='*' && str[i-1][j+1]!='*'))
			star++;
		  }
		}
	   }
	   
	  }
	 }
	 printf("%d\n",star);
  }
  
  return 0;
 }
