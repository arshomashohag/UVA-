#include<bits/stdc++.h>


using namespace std;
#define lld long long int

class node{
public:
     int  n;
     bool chk;
    node *next[27];
    node(){
        n=0;
        chk=false;
        for(int i=0; i<26; i++){
            next[i]=NULL;
        }
    }
};


int  sn, i, j ;
node *root;
string in[100005];
double res, out;

void insertIn(string p){
int l, i;

char ch;
node *ptr1, *ptr2;

ptr1 = root;

l = p.size();

for(i=0; i<l; i++){
 ch = p[i];

 if( ptr1->next[ch-'a']!=NULL){
    ptr2 =  (ptr1->next[ch-'a']);
 }

 else{
     (ptr1->n)++;
     ptr2 = new node();
     (ptr1->next[ch-'a']) = ptr2 ;

 }
 if((i+1)==l)
    ptr2->chk=true;

  ptr1 = ptr2;
}


}

int keyStrk(string p){
int l, i;
int ret=1;
node *ptr1, ptr2;
char ch;

 l = p.size();
 ch = p[0];
 ptr1 = root->next[ch-'a'];

 for(i=1; i<l; i++){
        ch = p[i];
    if( (ptr1->n) > 1 || ptr1->chk){
       ret++;
    }
   ptr1 = ptr1->next[ch-'a'];

 }

return ret;

}

void delIn(node* nd){

  if(nd->next[0]==NULL && nd->next[1]==NULL)
  {
      delete nd;
      return;
  }

  for(int i=0; i<26; i++){
    if(nd->next[i]!=NULL)
      delIn(nd->next[i]);
 }

  delete nd;
}



int main(void)
{

  while(scanf("%d", &sn)==1){
     root = new node();
    out=0;
   for(i=0; i<sn; i++){
     cin>>in[i];
     insertIn(in[i]);
   }
   out=0;
 for(i=0; i<sn; i++){
    out += keyStrk(in[i]);
 }

  res = out/((double)sn);
   printf("%.2lf\n", res);

   delIn(root);

  }

  return 0;
}
