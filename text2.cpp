 #include<stdio.h>

 int main(void)
 {
   int i=0,j=0,count=1;
   char text_in[500],text_out[500];
   
   while(gets(text_in))
    {
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
	 printf("\n");
   }
 return 0;
 }
