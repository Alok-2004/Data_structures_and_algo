#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
  unordered_set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);
  s.erase(3);
//will use for each 
  for(int ele : s){
    cout<<ele<<" ";
  }

  cout<<"\nsize: ";
  cout<<s.size();
//   cout<<s.last();

//to check the existence of any element
  bool flag = (s.find(1) != s.end()); // mean target exists
  cout<< flag;
}