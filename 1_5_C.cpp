//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_C
#include <iostream>

using namespace std;

int main(){
  while(true){
    int a, b;
    if(a == 0 && b == 0) break;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
      for(int j = 0; j < b; j++){
        if((i + j) % 2 == 0) cout << "#";
        else cout << ".";
      }
      cout << endl;
    }
    cout << endl;
  }
}
