#include<cstdio>
#include<iostream>
#include<string>
#include<set>
#include<map>
#include<utility>
#define lld long long int

using namespace std;

lld n,t;
lld i;
double d;

char arr[35];
string a;
set< string > input;
set< string >::iterator its;
map< string , lld > count_s;
map< string , lld >::iterator itm;

int main(void)
{
    cin>>t;
     scanf("\n");
    while( t-- )
    {
        n=0;
        while(scanf("%[^\n]",arr))
        {
            n++;
            a = arr;
            input.insert(a);
            itm=count_s.find(a);
            if(itm!=count_s.end())
            {
                itm->second++;
            }
            else
            {
                count_s.insert(make_pair(a,1));
            }
            getchar();
        }


        for(its=input.begin(); its!=input.end(); its++)
        {

            i = count_s[(*its)];
            d=(double)(i*100)/(double)n ;

            cout<<*its<<" ";
            printf("%0.4lf\n",d);
        }

        count_s.clear();
        input.clear();

        if(t>0)
            printf("\n");

        getchar();
    }

    return 0;
}
