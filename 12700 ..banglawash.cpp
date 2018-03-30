#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int Bang,WWW,Tie,Aban,Drw,test,match,i,t, l;
string res;

int main(void)
{
  scanf("%d",&test);
  t=1;
  while(t<=test)
  {
  	Bang=0;
  	WWW=0;
  	Tie=0;
  	Aban=0;
    scanf("%d",&match);

      if(match)
      {
      cin>>res;
	  for(i=0; i<match; i++)
	  {
	  	if(res[i]=='B')
	  	Bang++;
	  	else if(res[i]=='W')
	  	WWW++;
	  	else if(res[i]=='T')
	  	Tie++;
	  	else if(res[i]=='A')
	  	Aban++;
	  }
	  if((Bang==match) || (Bang>0 && (Bang+Aban)==match))
	   printf("Case %d: BANGLAWASH",t);
	   else if((WWW==match) || ( WWW>0 && ((WWW+Aban)==match) ))
	   printf("Case %d: WHITEWASH",t);

	   else if(Aban==match)
	   printf("Case %d: ABANDONED",t);

	   else if(Bang>WWW)
	   printf("Case %d: BANGLADESH %d - %d",t,Bang,WWW);

	   else if(Bang<WWW)
	   printf("Case %d: WWW %d - %d",t,WWW,Bang);
	   else if(Bang==WWW )
	   printf("Case %d: DRAW %d %d",t,Bang,Tie);

        printf("\n");

      }
	   t++;

  }
  return 0;
}
