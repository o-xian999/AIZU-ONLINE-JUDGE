//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_A&lang=en
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
   int n;
   //vector<int> vec;
   int j[1000];

   cin >> n;

   for(int i = 0; i < n; i++){
    cin >> j[i];
   }

   //sort(vec.begin(), vec.end(), greater<int>());

   for(int i = n - 1; i > 0; i--){
    cout << j[i] << " ";
   }

   cout << j[0] << endl;
}
