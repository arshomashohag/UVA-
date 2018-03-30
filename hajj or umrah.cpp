 #include<stdio.h>
 #include<string.h>
 
 int main(void)
 {
  char str[20];
  int case_n=1;
  while(gets(str))
  {
   if(!strcmp(str,"*"))
   break;
   
  if(!strcmp(str,"Hajj"))
   printf("Case %d: Hajj-e-Akbar\n",case_n);
  else if(!strcmp(str,"Umrah"))
   printf("Case %d: Hajj-e-Asghar\n",case_n);
   
   case_n++;
  }
  return 0;
 }
