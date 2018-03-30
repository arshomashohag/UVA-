 #include<stdio.h>
 #include<ctype.h>
 
 char str[220],ch;
 
 int main(void)
  {
   int t,i,big,hold;
   
   while(scanf("%d",&t)==1)
   {
	for(;t>0;t--)
	{
     int ar[30]={0};
	 scanf(" %[^\n]",str);
	 i=0;
	 while(str[i])
	 {
	  ch=str[i];
	  if(isalpha(ch))
	  {
		if(ch>='A' && ch<='Z')
		{
		 ar[ch-65]++;
		}
		else
		ar[ch-97]++;
	  }
	  i++;
	 }
	 big=0;
	 for(i=0;i<26;i++)
	 {
	  if(ar[i]>big)
	  {
	   big=ar[i];
	   hold=i;
	  }
	 }
	 printf("%c",(97+hold));
	 for(i=hold+1;i<26;i++)
	 {
	  if(ar[i]==big )
	  printf("%c",(i+97));
	 }
	printf("\n");
	}
   }
   return 0;
 }
