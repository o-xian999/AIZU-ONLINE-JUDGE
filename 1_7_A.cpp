//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_A
#include <iostream>

using namespace std;

int main(){
  int m, f, r;
  while(true){
    cin >> m >> f >> r;
    if(m == -1 && f == -1 && r == -1)break;
    if(m == -1 || f == -1)cout << "F" << endl;
    else if(m + f >= 80)cout << "A" << endl;
    else if(m + f >= 65 && m + f < 80)cout << "B" << endl;
    else if((m + f >= 50 && m + f < 65)||(m + f >= 30 && m + f < 50 && r >= 50))cout << "C" << endl;
    else if(m + f < 50 && m + f >= 30 && r < 50)cout << "D" << endl;
    else if(m + f < 30)cout << "F" << endl;
  }
}
