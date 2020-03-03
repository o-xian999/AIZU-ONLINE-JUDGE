//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_C
#include <iostream>

using namespace std;

int main(){
  int r, c, a[100][100] = {{}}, sumi[100] = {}, sumj[100] = {}, sumfin = 0;
  cin >> r >> c;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout << a[i][j] << " ";
      sumi[i] += a[i][j];
    }
    cout << sumi[i] << endl;
  }

  for(int j = 0; j < c; j++){
    for(int i = 0; i < r; i++){
      sumj[j] += a[i][j];
    }
    cout << sumj[j] << " ";
  }

  for(int i = 0; i < r; i++){
    sumfin += sumi[i];
  }
  cout << sumfin << endl;
}
