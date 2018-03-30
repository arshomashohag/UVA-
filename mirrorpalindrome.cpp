 #include<stdio.h>
 
 void is_palindrome();
 void is_mirorred();
 
 char str[500];
 int flag_rp=1,flag_m=1,strl;
 
 int main(void)
 {
   while(gets(str))
   {
	 is_palindrome();
	 
	 if(flag_rp && flag_m)
	 printf("%s--is a mirrored palindrome.\n",str);
	 
	 else if(flag_rp)
	  printf("%s--is a regular palindrome.\n",str);
	  
     else if(flag_m)
	  printf("%s--is a mirror string.\n",str);
	  
	 else
	  printf("%s--is not a palindrome.\n",str);
	  
	  flag_rp=1;
	  flag_m=1;
   }
return 0;
 }
 

 void is_palindrome()
 {
   int i=0;

    for(strl=0;str[strl];strl++);
    
	 strl=strl-1;
      while(str[i])
       {
		 if(str[i]!=str[strl-i])
		 {
		   flag_rp=0;
		   break;
		 }
		 if((++i)>(strl/2))
		  break;
       }
       
       is_mirorred();
       
    return;
  }
  
  
  void is_mirorred()
  {
   int a=0;
   
   while(str[a])
   {
	if(str[a]=='A' && str[strl-a]!='A')
	{
	  flag_m=0;
	}
	else if(str[a]=='E' && str[strl-a]!='3')
      {
	   flag_m=0;
	   }
   else if(str[a]=='3' && str[strl-a]!='E')
    {
	   flag_m=0;
	   }
	else if(str[a]=='H' && str[strl-a]!='H')
	{
		flag_m=0;
	}
   else if(str[a]=='I' && str[strl-a]!='I')
	{
		flag_m=0;
	}
   else if(str[a]=='M' && str[strl-a]!='M')
	{
		flag_m=0;
	}
   else if(str[a]=='O' && str[strl-a]!='O')
	{
		flag_m=0;
	}
	
   else if(str[a]=='T' && str[strl-a]!='T')
	{
		flag_m=0;
	}
	
  else if(str[a]=='U' && str[strl-a]!='U')
	{
		flag_m=0;
	}
	
  else if(str[a]=='V' && str[strl-a]!='V')
	{
		flag_m=0;
	}
	
  else if(str[a]=='W' && str[strl-a]!='W')
	{
		flag_m=0;
	}
	
 	else if(str[a]=='X' && str[strl-a]!='X')
	{
		flag_m=0;
	}
 else if(str[a]=='Y' && str[strl-a]!='Y')
	{
		flag_m=0;
	}
	
  else if(str[a]=='1' && str[strl-a]!='1')
	{
		flag_m=0;
	}
	
  else if(str[a]=='8' && str[strl-a]!='8')
	{
		flag_m=0;
	}
	
  else if(str[a]=='L' && str[strl-a]!='J')
      {
	   flag_m=0;
	   }
   else if(str[a]=='J' && str[strl-a]!='L')
      {
	   flag_m=0;
	   }
	   
  else if(str[a]=='Z' && str[strl-a]!='5')
      {
	   flag_m=0;
	   }
   else if(str[a]=='5' && str[strl-a]!='Z')
      {
	   flag_m=0;
	   }
   else if(str[a]=='2' && str[strl-a]!='S')
      {
	   flag_m=0;
	   }
   else if(str[a]=='S' && str[strl-a]!='2')
      {
	   flag_m=0;
	   }
   else
   flag_m=0;

      if((++a)>(strl/2))
		break;
   }
   return;
  }
