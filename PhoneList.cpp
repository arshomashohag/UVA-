#include<bits/stdc++.h>
#define lld long long int

using namespace std;

int main(void)
{
 set< string > phoneList;
 set< string >::iterator it;
 string number1, number2;
 lld i, j, t,nn;
 bool flag;

 scanf("%lld",&t);
 while(t--)
 {

     scanf("%lld",&nn);

     for(i=0; i<nn; i++)
     {
         cin>>number1;
         phoneList.insert(number1);
     }

   it = phoneList.begin();
  flag = false;
   nn--;

    for(i=0; i<nn; i++)
    {
      number1 =  (*it);
      it++;

      number2 = (*it);
      j=0;
      while(number1[j] && number2[j] && number1[j]==number2[j])
      {
        j++;
      }
      if(number1[j]=='\0')
      {
          flag = true;
          break;
      }
    }
    it = phoneList.begin();
   while(!phoneList.empty())
   {
     phoneList.erase(it);
     it++;
   }
    if(!flag)
        printf("YES\n");
    else
        printf("NO\n");
 }

return 0;
}
