 #include<stdio.h>

 char str[1000015];
 

 int main(void)
 {
 unsigned long long int i,j,it,n,ind,case_n=0;
   int flag,fst_d;
   
while(scanf("%s",str)==1)
 {
   if(str[0]=='\n')
   break;
	case_n++;
	scanf("%llu",&n);
 for(ind=1;ind<=n;ind++)
  {
  scanf("%llu%llu",&i,&j);
  flag=0;
	 
 if(i>j)
 {
   it=j;
   j=i;
   i=it;
  }

 fst_d=str[i];
  for(;i<=j;i++)
   if(fst_d!=str[i])
	{
	 flag=1;
	  break;
	   }
    printf("Case %d:\n",case_n);
	if(flag)
	 printf("No\n");
	 else
	 printf("yes\n");
     }
	}
	return 0;
 }
