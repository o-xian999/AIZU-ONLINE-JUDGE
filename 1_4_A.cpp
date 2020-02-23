#include <iostream>
#include <iomanip>

using namespace std;

int main (){
  //float a, b, d, r, f;
  double f, a_f, b_f;
  int a, b, d, r;
  cin >> a >> b;

  //a_f = a;
  //b_f = b;

  //d = a / b;
  //r = a % b;
  //f = a_f / b_f;

  cout << a / b << " " << a % b << " ";
  //https://qiita.com/ryu136/items/1cbeb860d4a2f056358aより、浮動小数点表示の桁数指定
  cout << fixed << setprecision(5) << (double) a / b << endl;
}
