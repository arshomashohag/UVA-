#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#define lld long long int

using namespace std;

lld temp, n, i, j, in, q, le, ri, l, h, mid;

lld ar[50005];

int main(void)
{

    scanf("%lld",&n);
    temp = -1000;

    for(i=0; n-- ; )
    {
        scanf("%lld",&in);

        if(in!=temp)
        {
            ar[i++] = in;
            temp = in;
        }
    }

   n=i;

    scanf("%lld",&q);

    for(i=1; i<=q; i++)
    {
        scanf("%lld",&in);

        l= 0;
        h= n-1;

        mid = (l+h)/2;

        le = -1;
        ri = -1;

        if(in>ar[n-1])
            le = n-1;

        else if(in<ar[0])
            ri = 0;

        else if(in==ar[0])
            {
                if(n>1)
                ri=1;
            }
        else if(in==ar[n-1])
            {
                if(n-2>=0)
                le=n-2;
            }

        else
        {

            while(l<h)
            {

                if(ar[mid]==in)
                {

                    if( (mid-1)>=0 )
                        le = mid-1;

                    if((mid+1)<n)
                        ri = mid+1;

                    break;
                }

                else if(ar[mid]<in)
                {
                    if( (mid+1)<n && ar[mid+1]>in)
                    {
                        le = mid;
                        ri = mid+1;
                        break;
                    }

                    else
                    {
                        l = mid+1;
                        mid = (l+h)/2;
                    }
                }


                else if(ar[mid]>in)
                {
                    if( (mid-1)>=0 && ar[mid-1]<in )
                    {
                        ri = mid;
                        le = mid-1;
                        break;
                    }
                    else
                    {
                        h = mid-1;
                        mid = (l+h)/2;
                    }
                }
            }
        }

        if(le==-1 && ri==-1)
        {
            if(ar[mid]==in)
                {
                    if( (mid-1)>=0 )
                        le = mid-1;
                    if((mid+1)<n)
                        ri = mid+1;
                }

                else if(ar[mid]<in)
                {
                    if( (mid+1)<n && ar[mid+1]>in)
                    {
                        le = mid;
                        ri = mid+1;

                    }

                }


                else if(ar[mid]>in)
                {
                    if( (mid-1)>=0 && ar[mid-1]<in )
                    {
                        ri = mid;
                        le = mid-1;

                    }
                }
            }

        le!= -1 ? printf("%lld",ar[le]): printf("X") ;

        ri!= -1 ? printf(" %lld\n",ar[ri]):printf(" X\n") ;
    }

    return 0;
}
