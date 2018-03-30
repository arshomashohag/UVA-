  #include<stdio.h>
 #include<string.h>

 char in[30],str[][20]={"HELLO","ENGLISH","HOLA","SPANISH","HALLO","GERMAN",
                  "BONJOUR"," FRENCH","CIAO","ITALIAN","ZDRAVSTVUJTE","RUSSIAN"};

 int main(void)
 {
  int i,j,k=0,cm,flag;

while(scanf(" %[^\n]",in)==1)
 {
   k++;
	if(in[0]=='#')
	 break;
	flag=0;
  for(cm=0;cm<=10;cm+=2)
  if(!strcmp(in,str[cm]))
  {
   printf("Case %d: %s\n",k,str[cm+1]);
   flag=1;
   break;
  }
   if(!flag)
    printf("Case %d:UNKNOWN\n",k);
  }
  return 0;
 }
