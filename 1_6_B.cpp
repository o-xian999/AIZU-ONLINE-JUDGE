//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_B
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  vector<int> S(13,0);
  vector<int> H(13,0);
  vector<int> C(13,0);
  vector<int> D(13,0);

  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int m;
    string s;
    cin >> s >> m;
    if(s == "S") S[m - 1] = m;
    if(s == "H") H[m - 1] = m;
    if(s == "C") C[m - 1] = m;
    if(s == "D") D[m - 1] = m;
  }

  for(int i = 0; i < 13; i++){
    if(S[i] == 0){
      cout << "S" << " " << i + 1 << endl;
    }
  }

  for(int i = 0; i < 13; i++){
    if(H[i] == 0){
      cout << "H" << " " << i + 1 << endl;
    }
  }

  for(int i = 0; i < 13; i++){
    if(C[i] == 0){
      cout << "C" << " " << i + 1 << endl;
    }
  }

  for(int i = 0; i < 13; i++){
    if(D[i] == 0){
      cout << "D" << " " << i + 1 << endl;
    }
  }
}
//  int n, m;
//  string s;
//  int cards[4][13];
//  cin >> n;
//  for(int i = 0; i < n; i++){
//    cin >> s >> m;
//    if(s == "S") cards[0][m-1] = 1;
//    else if(s == "H") cards[1][m-1] = 1;
//    else if(s == "C") cards[2][m-1] = 1;
//    else if(s == "D") cards[3][m-1] = 1;
//  }
//
//  cout << cards[0][11];
//
//  for(int j = 0; j < 4; j++){
//    for(int k = 0; k < 13; k++){
//      if(cards[j][k] == 0 && j == 0) cout << "S "<< k + 1;
//      else if(cards[j][k] == 0 && j == 1) cout << "H " << k + 1;
//      else if(cards[j][k] == 0 && j == 2) cout << "C " << k + 1;
//      else if(cards[j][k] == 0 && j == 3) cout << "D " << k + 1;
//    }
//  }
//
//  cout << endl;
