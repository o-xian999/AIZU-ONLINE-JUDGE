//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B
#include <iostream>

using namespace std;

int main(){
  while(true){
    int n, x, sum = 0;
    cin >> n >> x;
    if(n == 0 && x == 0)break;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= n; j++){
        for(int k = 1; k <= n; k++){
          if(i + j + k == x && i < j && j < k) sum++;
        }
      }
    }
    cout << sum << endl;
  }
}
