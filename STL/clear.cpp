#include<bits/stdc++.h>
using namespace std;
int main(){
/* if capacity overs than it increases the value by 2x */  
  vector <int> v;
  cout<< v.max_size() << endl;
  cout<< v.capacity() << endl;
  v.push_back(10);
  
  v.push_back(10);
  v.push_back(20);
  v.push_back(2);
  v.push_back(2);
  v.clear();
  cout << v.size() << endl;
  return 0;

  
}

