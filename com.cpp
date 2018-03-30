 #include<stdio.h>

 int main(void)
 {

  unsigned long long int N,M,C;
  int n[100],o,y,x,m[100],k;

  while(scanf("%d%d",&n[x],&m[x])==2)
  {

	if(n==0 && m==0)
	break;


	N=1;
	M=1;
	o=n[x-y-1];
	 if((n[x-y-1]-m[x-y-1])>=m[x-y-1])
	 {
	   for(k=m[x-y-1];k>=1;k--,o--)
	   N=N*o;
	   for(k=2;k<=m[x-y-1];k++)
	   M=M*k;
	   C=N/M;
	}

	 else
	 {
	 for(k=n[x-1-y]-m[x-y-1];k>=1;k--,o--)
	 N=N*o;
	for(k=2;k<=n[x-y-1]-m[x-y-1];k++)
	   M=M*k;
	   C=N/M;
	}
	printf("%d things taken %d at a time is %llu exactly.\n",n[x-y-1],m[x-y-1],C);
  }
}
return 0;
 }
