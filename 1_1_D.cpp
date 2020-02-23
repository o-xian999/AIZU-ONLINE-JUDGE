//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D
#include <iostream>
using namespace std;

int main (){
  int S, S_1, S_2, S_3;
  cin >> S;
  //時間は(与えられた秒÷60秒÷60分)の商
  S_1 = S / (60 * 60);
  //分は((与えられた時間-時間×60×60)÷60分)の商
  S_2 = (S - S_1 * 3600) / 60;
  //秒は(与えられた秒-(時間×60×60)-(分×60))
  S_3 = S - S_1 * 3600 - S_2 * 60;

  cout << S_1 << ":" << S_2 << ":" << S_3 << endl;
}
