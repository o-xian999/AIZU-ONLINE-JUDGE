#include <iostream>
using namespace std;

int main (){
  int S, S_1, S_2, S_3;
  cin >> S;
  S_1 = S / (60 * 60);
  S_2 = (S - S_1 * 3600) / 60;
  S_3 = S - S_1 * 3600 - S_2 * 60;

  cout << S_1 << ":" << S_2 << ":" << S_3 << endl;
}
