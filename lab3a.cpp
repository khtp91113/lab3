#include<iostream>
#include<vector>
using namespace std;
void sort(vector <int> all)
{
 int insert,next,temp,tem,i;
 for(next=1;next<all.size();next++)
 {
  insert=all.at(next);
  for(tem=next;tem>0&&(insert>all.at(tem-1));tem--)
  {
   all.at(tem)=all.at(tem-1);
  }
  all.at(tem)=insert;
 }
 int amount=0;
 for(next=0;next<5;next++)
  amount+=all.at(next);
 cout<<amount<<endl;
}

int main()
{
 int total;
 cin>>total;
 vector <int> all(total);
 int i,num;
 for(i=0;i<total;i++)
 {
  cin>>num;
  all.at(i)=num;
 }
 sort(all);
 return 0;
}
  
