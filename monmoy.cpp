#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    long long int a,i,x,p,flag=0,count=1,j;
    char str[1000];
    cin>>a;
    for(i=a+1;;i++)
    {
        stringstream ss;
        ss<<i;
        ss>>str;
        for(j=0;str[j] != '\0';j++)
        {
            if(str[j] == '8')
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
