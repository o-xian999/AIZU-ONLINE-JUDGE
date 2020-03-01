//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_C
#include <iostream>

using namespace std;

int main(){
  int one[3][10] = {0};
  int two[3][10] = {0};
  int three[3][10] = {0};
  int four[3][10] = {0};
  int n;
  //cout << one[2][5] << endl;

  cin >> n;
  for(int i = 0; i < n; i++){
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    if(b == 1) one[f - 1][r - 1] += v;
    if(b == 2) two[f - 1][r - 1] += v;
    if(b == 3) three[f - 1][r - 1] += v;
    if(b == 4) four[f - 1][r - 1] += v;
  }


  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      cout << " " << one[i][j];
    }
    cout << endl;
  }
  //cout << " " << endl;
  cout << "####################" << endl;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      cout << " " << two[i][j];
    }
    cout << endl;
  }
  //cout << " " << endl;
  cout << "####################" << endl;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      cout << " " << three[i][j];
    }
    cout << endl;
  }
  //cout << " " << endl;
  cout << "####################" << endl;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      cout << " " << four[i][j];
    }
    cout << endl;
  }
  //cout << " " << endl;
  //cout << "####################" << endl;

}
