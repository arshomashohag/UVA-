 #include<stdio.h>
 
 char ar[1000];
 
 int main(void)
 {
  int test,i,d,m,y,flag,tempd,t,case_n;
  
  scanf("%d",&t);
   for(case_n=1;case_n<=t;case_n++)
   {
   	scanf(" %[^\n]",ar);
   
    flag=0;
    d=ar[1]-48;
    d=d+(ar[0]-48)*10;
    
    if(ar[3]=='J')
    {
      if(ar[4]=='A')
      m=1;
     else if(ar[4]=='U')
      {
       if(ar[5]=='N')
       m=6;
       else
       m=7;
      }
    }
    else if(ar[3]=='M')
    {
      if(ar[4]=='A' && ar[5]=='R')
      m=3;
      else
      m=5;
    }
    else if(ar[3]=='A')
    {
      if(ar[4]=='P')
      m=4;
      else
      m=8;
    }
    else if(ar[3]=='F')
    m=2;
    else if(ar[3]=='S')
    m=9;
    else if(ar[3]=='O')
    m=10;
    else if(ar[3]=='N')
    m=11;
    else if(ar[3]=='D')
    m=12;
    
     
    y=(ar[7]-48)*1000+(ar[8]-48)*100+(ar[9]-48)*10+(ar[10]-48);
    
    if((y%4==0) && (y%100!=0 || (y%400==0)))
    flag=1;
    tempd=0;
    i=1;
    while(i<=(m-1))
    {
      if(i==1)
       d=d+31;
      if(i==2)
	  {
	  	if(flag==0)
	  	  d=d+28;
	  	else 
		  d=d+29;  
	  } 
	  if(i==3)
	  {
	  	d=d+31;
	  }
	  if(i==4)
	    d=d+30;
	  if(i==5)
	    d=d+31;
	  if(i==6)
	    d=d+30;
	  if(i==7)
	    d=d+31;
	  if(i==8)
	    d=d+31;
	  if(i==9)
	    d=d+30;
	  if(i==10)
	    d=d+31;
	  if(i==11)
	    d=d+30;
	  if(i==12)
	    d=d+31;	
		i++;						  
    } 
    if(d<=300)
    {
    	printf("Case %d: %d Hundreds\n",case_n,d);
    	test++;
    }
    if(d>300 && d<361)
    {
    	printf("Case %d: %d Tens\n",case_n,d-300);
    	test++;
    }
    if(d>360)
    {
    	printf("Case %d: %d Ones\n",case_n,d-360);
    	test++;
    }
      
   
   }
  return 0;
 }
