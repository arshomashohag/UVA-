 #include<cstdio>
 #include<cstring>

 char ar1[500],ar2[500];
 int n,i,r,len1,len2,car,j,flag;

 int main(void)
 {


  scanf("%d",&n);
  getchar();
   for(j=1;j<=n;j++)
   {
   	 scanf("%s%*c%s",ar1,ar2);
   	 len1=strlen(ar1)-1;
   	 len2=strlen(ar2)-1;

   	 i=0;
   	 car=0;
     flag=0;
	    while(i<=len1 || i<=len2)
        {
            r=0;
           if(i<=len1)
                {
                    r=(ar1[i]-48)+car;
                }
            if(i<=len2 && i<=len1)
            {
                r=r+(ar2[i]-48);
            }
            else if(i<=len2)
            {
               r=r+(ar2[i]-48)+car;
            }

            car=r/10;
            r=r%10;
            if(r || flag)
            {
                printf("%d",r);
                flag=1;
            }

            i++;
          }
          if(car)
            printf("%d",car);

        printf("\n");
   }

  return 0;
 }
