#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<stack>

using namespace std;


string n1, n2, out, fout;
stack<char> st;
int ch;
int l, l1, l2, l3, i, j, k, dig, car;


string sumstr(const string a, const string b, int pos)
{
    int la, lb, car=0, dig, i, j;
    string ret;
    stack<char> myst;

    la = a.size()-1;
    lb = b.size()-1;


    for(i=0; i<pos; i++)
        myst.push(a[la-i]);

    la = la - pos;

    for(; la>=0 || lb>=0; la--, lb--)
    {
        dig = car;
        if(la>=0)
            dig = dig + (a[la]- 48);
        if(lb>=0)
            dig = dig + (b[lb] - 48);

        car = dig/10;
        dig = dig%10;

        myst.push(dig+48);
    }

    if(car)
        myst.push(car+48);


    while(!myst.empty())
    {
        ret.push_back(myst.top());
        myst.pop();
    }


    return ret;
}



int main(void)
{



    while(cin>>n1)
    {
    cin>>n2;

    l1 = n1.size()-1;
    l2 = n2.size();


    for(i=1; i<=l2; i++)
    {
        dig = n2[l2-i]-48;
        car = 0;

        for(l=l1; l>=0; l--)
        {
            ch = n1[l] - 48 ;
            ch = car + (dig*ch);
            car = ch/10;
            ch = ch % 10;

            st.push((ch+48));
        }
          if(car)
            st.push(car+48);

        while(!st.empty())
        {
            out.push_back(st.top());
            st.pop();
        }

        if(fout.size()>0)
            fout = sumstr(fout, out, i-1 );
        else
            fout = out;

       out.clear();
    }


    cout<<fout<<endl;
    fout.clear();
  }
    return 0;
}
