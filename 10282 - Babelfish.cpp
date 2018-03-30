#include<cstdio>
#include<iostream>
#include<map>
#include<cstring>
#include<string>


using namespace std;

int main(void)
{
    map<string, string> strmap;
    map<string, string>::iterator iter;
    string a,b;
    char inp[100];
    char first[50],second[50];
    while(gets(inp))
    {
        if(strlen(inp)==0)
            break;
       sscanf(inp,"%s%*c%s",first,second);
        a=first;
        b=second;
      strmap[b]=a;
    }
    while(gets(first))
    {
        a=first;
       iter=strmap.find(a);
       if(iter!=strmap.end())
            cout<<iter->second<<endl;
       else
        cout<<"eh\n";
    }

    return 0;
}
