 #include<stdio.h>


 void print_text();

 char text_in[500],text_out[500];

 int main(void)
 {

   while(gets(text_in))
   {
         print_text();
         printf("\n");
   }
 return 0;
 }

 void print_text()
 {
  int i=0,j=0,count=1;

  while(text_in[i])
  {
        if(text_in[i]=='"' && count==1)
      {
                text_out[j]='`';
                text_out[j+1]='`';
                j+=2;
                count=2;
          }
         else if(text_in[i]=='"' && count==2)
      {
                text_out[j]='\'';
                text_out[j+1]='\'';
                j+=2;
                count=1;
          }

          else
          {
          text_out[j]=text_in[i];
          j++;
        }

          i++;
  }
  text_out[j]='\0';

   puts(text_out);

  return;
 }
