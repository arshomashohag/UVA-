 #include<stdio.h>
 
 float grade[1100];
 
 int main(void)
 {
  int c,n,ic,in,count,avarage;
  float grade_sum,output;
  char ch='%';
  
  while(scanf("%d",&c)==1)
  {
   for(ic=1;ic<=c;ic++)
   {
	grade_sum=0;
	count=0;
	scanf("%d",&n);
	for(in=0;in<n;in++)
	{
	scanf("%f",&grade[in]);
	grade_sum=grade_sum+grade[in];
    }
    avarage=(int)(grade_sum/(float)n);
    for(in=0;in<n;in++)
     if(avarage<grade[in])
      {
	  count++;
      }
    output=(count*100)/(float)n;
    printf("%.3f%c\n",output,ch);
   }
  }
  
  return 0;
 }
