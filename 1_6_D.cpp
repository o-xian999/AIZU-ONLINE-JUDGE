//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main (){
//  int n, m;
//  cin >> n >> m;
//  //vector<vector<int>> a(n, vector<int>(m));
//  int a[101][101], b[100];
//
//  //cout << a[2] << endl;
//
//  for(int i = 0; i < n; i++){
//    for(int j = 0; j < m; j++){
//      a[i][j] = 0;
//      cin >> a[i][j];
//    }
//  }
//
//  //cout << a[2][1] << endl;
//
//  //vector<vector<int>> b(m, vector<int>(1))
//  //int b[100];
//
//  for(int j = 0; j < m; j++){
//    //cin >> b[m][1];
//    b[j] = 0;
//    cin >> b[j];
//  }
//  cout << b[1] << endl;
//
//  //vector<vector<int>> c(n, vector<int>(1));
//  //int c[n] = {0};
//
//  for(int i = 0; i < n; i++){
//    //c[1] += a[1][i] * b[i][1];
//    int c = 0;
//    for(int j = 0; j < m; i++){
//      c += a[i][j] * b[j];
//      //cout << c[i] << endl;
//    }
//    cout << c << endl;
//  }
//
//  return 0;
//
////  for(int i = 0; i < n; i++){
////    cout << c[i] << endl;
////  }
//
//}
#include <iostream>

using namespace std;

int main(){
  int a[100][100];
  int b[100];
  int n, m, c = 0;

  cin >> n >> m;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < m; i++)cin >> b[i];
  
  for(int i = 0; i < n; n++){
    for(int j = 0; i < m; m++){
      c += a[i][j]*b[j];
    }
    cout << c << endl;
    c = 0;
  }
}

#include<iostream>
using namespace std;
int main(){
  int n,m;
  int i,j,k;
  int mat[100][100]={{}};
  int ve[100]={};
  cin >> n >> m;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin >> mat[i][j];
    }
  }
  for(j=0;j<m;j++) cin >> ve[j];
  for(i=0;i<n;i++){
    int x=0;
    for(j=0;j<m;j++) x+=mat[i][j]*ve[j];
    cout << x << endl;
  }

  return 0;
}
