 #include<stdio.h>
 #include<stdlib.h>
 
 int comfunc(const void *a,const void *b)
 {
  return (*(int *)a-*(int *)b);
 }
 
 int main(void)
 {
    int t,i,j;
   float test_m,t_m,marks[13],tests,ct[5];
   
   while(scanf("%d",&t)==1)
   {
	for(i=1;i<=t;i++)
     {
	for(j=0;j<7;j++)
	scanf("%f",&marks[j]);

   ct[0]=marks[4];
   ct[1]=marks[5];
   ct[2]=marks[6];
   qsort(ct,3,sizeof(float),comfunc);
   
	tests=ct[2]+ct[1];
	test_m=tests/2.00;

	t_m=marks[0]+marks[1]+marks[2]+marks[3]+test_m;
	if(t_m>=90)
	printf("Case %d: A\n",i);
	else if(t_m<90 && t_m>=80)
	printf("Case %d: B\n",i);
	else if(t_m<80 && t_m>=70)
	printf("Case %d: C\n",i);
	else if(t_m<70 && t_m>=60)
	printf("Case %d: D\n",i);
	else
	printf("Case %d: F\n",i);
	 }
   }
   return 0;
 }
