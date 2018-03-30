#include<bits/stdc++.h>


using namespace std;
#define lld long long int

class node{
public:
    int n;
    node *next[3];
    node(){
        n = 0;
        next[0]=NULL;
        next[1]=NULL;
    }
};


lld t, tc, sn, i, j, out;
node *root;
string in;

lld insertIn(string p){
int l, i;
lld ns, ret=0;
char ch;
node *ptr1, *ptr2;

ptr1 = root;


l = p.size();

for(i=0; i<l; i++){
 ch = p[i];

 if(ptr1->next[ch-'0']!=NULL){
    ptr2 =  ptr1->next[ch-'0'];
 }

 else{
     ptr2 = new node();
     ptr1->next[ch-'0'] = ptr2 ;
 }



 (ptr2->n)++;
  ns = (i+1) * (ptr2->n);
  ret = max(ns, ret);
  ptr1 = ptr2;
}

return ret;
}


void delIn(node* nd){

  if(nd->next[0]==NULL && nd->next[1]==NULL)
  {
      delete nd;
      return;
  }

  if(nd->next[0]!=NULL)
    delIn(nd->next[0]);

  if(nd->next[1]!=NULL)
    delIn(nd->next[1]);

  delete nd;
}



int main(void)
{
  scanf("%lld", &t);

  while(t--){
     root = new node();

    scanf("%lld", &sn);
    out=0;

   while(sn--){
     cin>>in;
     out=max(out, insertIn(in));
   }
    delIn(root);

   printf("%lld\n", out);

  }

  return 0;
}
