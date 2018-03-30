 #include<stdio.h>
 
 int main(void)
 {
  int t,r,hl[3],hr[3],i,lr[3],ll[3],j,length,width,lx,rx;
  
  while(scanf("%d",&t)==1)
  {
   for(i=1;i<=t;i++)
   {
	scanf("%d",&r);
	
	length=5*r;
	width=(3*length)/5;
	r=2*r;
	hl[1]=width/2;
	hr[1]=hl[1];
	lr[1]=-hl[1];
	ll[1]=lr[1];
	
	lx=(9*length)/20;
	rx=length-lx;
	
     hl[0]=-lx;
	hr[0]=rx;
	lr[0]=rx;
	ll[0]=-lx;
	printf("Case %d:\n",i);
	printf("%d %d\n",hl[0],hl[1]);
	printf("%d %d\n",hr[0],hr[1]);
	printf("%d %d\n",lr[0],lr[1]);
	printf("%d %d\n",ll[0],ll[1]);

   }
  }
  return 0;
 }
