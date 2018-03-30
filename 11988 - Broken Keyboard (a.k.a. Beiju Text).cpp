#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    list<char> str;
    stack<char> tmp;
    int i, j, k;
    char c;
    i=1;

    while(scanf("%c",&c)==1)
    {
        str.clear();
        if(c=='[')
            i=0;
        else if(c==']')
            i=1;
        else
            str.push_back(c);



        while(scanf("%c",&c) && c!='\n' && c!='\0')
        {
            if(c=='[')
                i=0;

            else if(c==']')
            {
                while(!tmp.empty())
                {
                    str.push_front(tmp.top());
                    tmp.pop();
                }
                i=1;
            }

            else if(i==0)
            {
                tmp.push(c);
            }

            else
                str.push_back(c);

        }

     while(!tmp.empty())
     {
         str.push_front(tmp.top());
         tmp.pop();
     }
        while(!str.empty())
        {
            printf("%c",str.front());
            str.pop_front();
        }

        printf("\n");
    }

    return 0;
}
