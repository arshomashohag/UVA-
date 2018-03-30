 #include<stdio.h>
int main()
{
    int t,k=1;
    long long int r,g,b,w,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&r,&g,&b,&w);
        while(1)
        {
            if(r<=g && r<=b)
            {
            	if(w>0)
                   {
                   	 r=r+1;
                   	w--;
                   } 
              
               temp=r;  
                
            }
            else if(g<=r && g<=b)
            {
                if(w>0)
                {
                	w--;
                	 g=g+1;
                }
                   
                temp=g;
                
            }
            else
            {
            	if(w>0)
            	{
            		w--;
            		 b=b+1;
            	}
                 
                temp=b;
                
                   
            }
            if(w==0)
                break;
        }
        printf("Case %d: %lld\n",k,temp);
        k++;
    }
    return 0;
}

