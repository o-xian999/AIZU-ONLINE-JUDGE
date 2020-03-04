//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_D
#include <iostream>

using namespace std;

int main(){
  int n, m, l;
  int i, j, k;
  int a[100][100];
  int b[100][100];
  int c[100][100];
  cin >> n >> m >> l;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < l; j++){
      cin >> b[i][j];
    }
  }
  //cout << a[1][2] << endl;
  for(int i = 0; i < n; i++){
    for(int k = 0; k < l; k++){
      //int c = 0;
      for(int j = 0; j < m; j++){
        //int c = 0;
        c[i][k] += a[i][j] * b[j][k];
        //cout << c << " ";
      }
      //cout << c << " ";
     // c = 0;
    }
    //cout << endl;
  }

  for(int i = 0; i < n; i++){
    for(int k = 0; k < l; k++){
      cout << c[i][k] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
