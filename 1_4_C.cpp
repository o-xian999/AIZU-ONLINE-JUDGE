//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C/

#include <iostream>
#include <string>
using namespace std;

int main (){
  int a,c;
  string b;
  for(int i = 0; i < 20000; i++){
    cin >> a >> b >> c;

    if(b == "+") cout << a + c << endl;
    else if(b == "-") cout << a - c << endl;
    else if(b == "*") cout << a * c << endl;
    //else if(b == "/") && (c == 0) Nothing done
    else if((b == "/") && (c != 0)) cout << a / c << endl;
    else if(b == "?") break;
  }
}
