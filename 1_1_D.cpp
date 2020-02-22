#include <iostream>
using namespace std;

int main (){
  int S, S_1, S_2, S_3;
  cin >> S;
  S_1 = S / 24 / 60 / 60;
  S_2 = S / 24 / 60;
  S_3 = S / 24;

  cout << S_1 << ":" << S_2 << ":" << S_3 << endl;
}
