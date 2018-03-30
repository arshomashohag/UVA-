#include<bits/stdc++.h>

using namespace std;

int digSum(int s){
 int ret=0;

 while(s){
    ret += (s%10);
    s /= 10;
 }
 return ret;
}


int main(void){
 int out=0, s , i, j, l;


 string n;
 cin>>n;

 while(!(n[0]=='0' && n[1]=='\0'))
 {
    s=0;
    out=1;

    l = n.length();
    for(i=0; i<l; i++){
        s += n[i]-48;
    }

   while(s>9)
    {
     s = digSum(s);
     out++;
    }

    if(s==9)
    {
      cout<<n<<" is a multiple of 9 and has 9-degree "<<out<<"."<<endl;
    }
    else
       cout<<n<<" is not a multiple of 9."<<endl;
  cin>>n;
 }


return 0;
}
