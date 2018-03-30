 #include<stdio.h>
  int main()
   { int t,x,y,z;
    float res,first;
	 scanf("%d",&t);
	 while(t--)
	 { scanf("%d%d%d",&x,&y,&z);
	  first=z/(float)(x+y);
	  res=first*x+(x-y)*first;
	   printf("%.0f\n",res);
	    }
    return 0;
 }
