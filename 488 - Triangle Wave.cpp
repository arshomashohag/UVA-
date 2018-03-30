 #include<cstdio>

 void wave(int a)
 {
  int i,j;

  for(i=1;i<=a-1;i++)
  {
   for(j=1;j<=i;j++)
    printf("%d",i);
    printf("\n");
  }
  for(i=1;i<=a;i++)
    printf("%d",a);
  printf("\n");

  for(i=a-1;i>0;i--)
  {
   for(j=1;j<=i;j++)
    printf("%d",i);
    printf("\n");
  }
 }

 int main(void)
 {
  int case_n,amp,fre,i,j;

  scanf("%d",&case_n);

   for(i=1;i<=case_n;i++)
   {
	scanf("%d%d",&amp,&fre);
	for(j=1;j<=fre;j++)
	{
	 wave(amp);

	 if(j<fre)
        printf("\n");
	}

	if(i<case_n)
        printf("\n");
   }

  return 0;
 }

