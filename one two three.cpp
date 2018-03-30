 #include<stdio.h>
 #include<string.h>

 int main(void)
 {
  char value[20][8],ch;
  int f,s,l,word,i,j,str_len,one,two;

  while(scanf("%d",&word)==1)
  {
   for(i=0;i<word;i++)
	 scanf("%s",&value[i]);
   for(i=0;i<word;i++)
   {
    if((str_len=strlen(value[i]))==5)
    printf("3\n");

    else
    {
	  one=0;
	  two=0;
	 for(j=0;j<str_len;j++)
	 {
	  if(value[i][j]=='e' || value[i][j]=='n')
	  one++;
	  else if(value[i][j]=='t' || value[i][j]=='w')
	  two++;

	 else if(value[i][j]=='o')
	 {
			one++;
			two++;
	 }
	 }
	 if(one>two)
	 printf("1\n");
	 else if(one==two && value[i][0]=='o'&&((value[i][1]=='n' || value[i][1]=='e')||(value[i][2]=='n' || value[i][2]=='e')))
	 printf("1\n");
	 else if((one==two && value[i][0]=='t')&&((value[i][1]=='o' || value[i][1]=='w')||(value[i][2]=='o' || value[i][2]=='w')))
	 printf("2\n");
	 else
	 printf("2\n");
    }
   }
 }//((value[i][1]=='o' || value[i][1]=='w')||(value[i][2]=='o' || value[i][2]=='w')) it's have no need...

 return 0;
 }
