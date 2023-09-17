#include<bits/stdc++.h>
using namespace std;


int main(){


list<int> myList = {10, 20, 30, 40, 30, 30, 70};

myList.insert(next(myList.begin(),2), {1,2,3});

   for (int val : myList)
    {
        cout << val << endl;
    }

return 0;

}