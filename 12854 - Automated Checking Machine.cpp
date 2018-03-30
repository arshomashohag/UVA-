#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using  namespace std;

int a[10],b[10], i;
bool flag;


int main(void)
{
    while(scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4] )==5)
    {
        scanf("%d%d%d%d%d",&b[0],&b[1],&b[2],&b[3],&b[4] );
        flag = false;

        for(i=0;i<5;i++)
        {
            if(a[i]==b[i])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }


    return 0;
}

