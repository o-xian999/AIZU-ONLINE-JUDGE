//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B
#include <iostream>

using namespace std;

int main (){
  int x;

  for(int i = 1; i <= 10000; i++){
    cin >> x;

    if(x == 0) break;
    else{
      cout << "Case " << i << ": " << x << endl;
    }

    //cout << "Case " << i << ": " << x << endl;
    //if(x == 0) break;
    
  }
}
