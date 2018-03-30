 #include<stdio.h>
 #include<string.h>

  char str[100000],temp[200],tt[300];

  void strrev(void)
  {
    int l,j=0;
    l=strlen(temp)-1;
    while(l>=0)
    {
        tt[j++]=temp[l--];
    }
    tt[j]='\0';
  }

 int main(void)
 {
   int i,j;

   while(scanf("%[^\n]",str)==1)
   {
	i=0;
	while(str[i])
     {
	  j=0;
	  while(str[i]!=' ' && str[i])
	  {
	   temp[j]=str[i];
	   j++;
	   i++;
	   }
	    temp[j]='\0';
	     strrev();
	     printf("%s",tt);
	    if(str[i])
		{
		    printf("%c",str[i]);
		    i++;
		}
     }
     printf("\n");
     getchar();
	}
   return 0;
 }
