 #include<stdio.h>
 #include<string.h>
 
 char str[1000015];
 unsigned long long int i[10000],j[10000],it,jt,n,ind,case_n=0,strl;
 
 int main(void)
 {
   int flag,fst_d;
   while(scanf("%s",str)==1)
   {
   if(str[0]!='0' || str[0]!='1')
   break;
   
	strl=strlen(str);
	case_n++;
	scanf("%llu",&n);
	
  for(ind=1;ind<=n;ind++)
    scanf("%llu%llu",&i[ind-1],&j[ind-1]);
	
 printf("Case %llu:\n",case_n);
	
 for(ind=1;ind<=n;ind++)
	 {
	 flag=0;
	 it=i[ind-1];
	 jt=j[ind-1];
if(it<=(strl-1) && jt<=(strl-1))
  {
	if(it<jt)
	{
	 fst_d=str[it];
	  for(;it<=jt;it++)
	   if(fst_d!=str[it])
	   {
		 flag=1;
		 break;
	   }
	 }
 else if(jt<it)
	{
	 fst_d=str[jt];
	  for(;jt<=it;jt++)
	   if(fst_d!=str[jt])
	   {
		 flag=1;
		 break;
	   }
   	 }
	
	if(flag)
	 printf("No\n");
	 else
	 printf("yes\n");
     }
	}
	}
	
	return 0;
   }
