#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int a;
    cin>>a;
    bool b=false;
    bool x=false;

    if(a<0)
    {
        b=true;
        a*=-1;
    }
    if(a==0)
    {
        cout<<"8"<<endl;
    }
    else if(a<10)
    {
        if(b)
        {
            if(a>8)
            cout<<"1"<<endl;
            else
                cout<<(a+8)<<endl;
        }
        else
        {
           if(a<=8)
            cout<<(8-a)<<endl;
        else
            cout<<"9"<<endl;
        }

    }
    else
        {
            int z=a;
            z/=100;
            while(z>0)
            {
                if(z%10==8)
                {
                  x= true;
                  break;
                }
                z/=10;

            }
            if(x)
                {
                    cout<<"1"<<endl;
                }
                else
                {
            int tm=a%10;
            int tm3=a%100;
             a/=10;
             int tm2=a%10;

            if(b)
            {
                 if(tm==9)
                    cout<<"1"<<endl;
                else
                    cout<<(tm+2)<<endl;
                }
            else
            {
        if(tm<8)
            cout<<(8-tm)<<endl;
        else if(tm==8)
            cout<<"10"<<endl;
        else if(tm2==7)
            cout<<"1"<<endl;
        else
            cout<<"9"<<endl;

            }
                }
        }
    return 0;
}
