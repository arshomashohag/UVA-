 #include<stdio.h>
 #include<string.h>
 
 char contr[2010][75],woman[2011][75];
 
 int main(void)
 {
  int n,in,jn,dif_con,flag;
  
  while(scanf("%d",&n)==1)
  {
  int cont[300]={0};
  
   for(in=1;in<=n;in++)
   scanf("%s%s",contr[ini-1],woman[ini-1]);
   
   dif_con=1;
   for(in=0;in<n;in++)
    {
		flag=0;
	 for(jn=in;jn>0;jn--)
	  if(!strcmp(contr[in],contr[in-jn]))
	  {
	   flag=1;
	   cont[in-jn]++;
	   break;
	  }
	  if(!flag)
	  {
	  dif_con++;
	  cont[in]++;
	  }
	}
	for()

  }
 }
