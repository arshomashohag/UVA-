 #include<stdio.h>
 #include<string.h>
 
 char str[][20]={"HELLO","ENGLISH","HOLA","SPANISH","HALLO","GERMAN",
                  "BONJOUR"," FRENCH","CIAO","ITALIAN","ZDRAVSTVUJTE","RUSSIAN"};
 
 int main(void)
 {
  int i,j,k=0,flag;
  char in[50];
  while(scanf(" %[^\n]",in)==1)
  {
	k++;
	if(in[0]=='#')
	break;
	flag=0;
  for(i=0;i<=10;i+=2)
  if(!strcmp(in,str[i]))
  {
   printf("Case %d: %s\n",k,str[i+1]);
   flag=1;
   break;
  }
   if(!flag)
    printf("Case %d: UNKNOWN\n",k);
  }
  return 0;
 }
