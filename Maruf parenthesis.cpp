#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    char  ch[200];
    char bracket;
    scanf("%d",&t);

    while(t--)
    {
        getchar();
      stack<char>abracek;
       scanf("%[^\n]",ch);
       int len=strlen(ch);

        if(len==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        for( i=0;i<len;i++)
        {
            if(ch[i]=='('||ch[i]=='[')
            {
                abracek.push(ch[i]);
            }

            if(ch[i]==')'||ch[i]==']')
            {
                if(!abracek.empty())
                    bracket=abracek.top();
                else
                    break;
                //cout<<bracket<<endl;
                if((ch[i]==']'&&bracket!='['))
                    break;
                if((ch[i]==')'&&bracket!='('))
                    break;
                if(!abracek.empty())
                    abracek.pop();
                else
                    break;

            }
        }


        if(abracek.empty()&&i==len)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        while(!abracek.empty())
            abracek.pop();
    }
    return 0;
}
