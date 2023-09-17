#include<bits/stdc++.h>
using namespace std;


int main(){
  
/* if capacity overs than it increases the value by 2x */  

  vector <int> v;
  cout<< v.max_size() << endl;
  cout<< v.capacity() << endl;
  v.push_back(10);
  cout<< v.capacity() << endl;
  v.push_back(10);
  cout<< v.capacity() << endl;
  v.push_back(20);
  cout<< v.capacity() << endl;
  v.push_back(2);
  cout<< v.capacity() << endl;
  v.push_back(2);
  cout<< v.capacity() << endl;
  return 0;
}

