#include<bits/stdc++.h>
using namespace std;


int main(){
    
list<int> myList = {10, 20, 30, 40, 30, 30, 70};


auto it = find(myList.begin(), myList.end(),60);

if(  it == myList.end() ){

    cout << "Not Found";

}  else {
    cout << "Found ";
}


return 0;

}