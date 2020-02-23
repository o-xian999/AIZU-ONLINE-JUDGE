//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_B
#include <iostream>

using namespace std;

int main (){
  int a, b, c;
  cin >> a >> b >> c;
  if((a < b)&&(b < c)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
