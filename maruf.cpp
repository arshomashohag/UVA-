#include<stdio.h>
 #include<string.h>
  int main()
  { int n,l,a,j,i,b;
   char k;
   char dat[80];
    printf("Now enter the letters :\n");
	gets(dat);
	n=strlen(dat);
	 printf("The rearranges are:\n");
	  for(j=1;j<=n;j++)
	  { b=j; l=n;
	  do
	   {
		 if(b==1)
	   {
			for(a=0;a<n;a++)
			 {
					printf("%c,",dat[a]);
			  }
			  printf("\n");
			   b++;
			   }
			   k=dat[l-2];
			    dat[l-2]=dat[l-1];
				 dat[l-1]=k;
				 if(j==n&&(l-1)==1)
				 {
					 break;
					  }
					  else
					  {
						for(a=0;a<n;a++)
						{
							printf("%c,",dat[a]);
							}
							printf("\n");
							}
							l--;
							if((l-1)==0)
							 break; }while(1);

getchar();
getchar();							 }
 return 0;
  }
