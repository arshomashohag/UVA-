#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using  namespace std;

int i, j, k, input[120], in, t, n;

int main(void)
{
    string out;

    char ar[][5]={ {'0',' '},
                    {'0', '.', ',', '?', '"'},
                    {'0', 'a', 'b', 'c'},
                    {'0', 'd', 'e', 'f'},
                    {'0', 'g', 'h', 'i'},
                    {'0', 'j', 'k', 'l'},
                    {'0', 'm', 'n', 'o'},
                    {'0', 'p', 'q', 'r', 's'},
                    {'0', 't', 'u', 'v'},
                    {'0', 'w', 'x', 'y', 'z'}

                    };

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
            cin>>input[i];

        for(i=0;i<n;i++)
        {
            cin>>in;
           out.push_back( ar[ input[i] ][in] );
        }

        cout<<out<<endl;

       out.clear();
    }


    return 0;
}
