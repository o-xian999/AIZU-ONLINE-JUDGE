//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C
#include <iostream>
#include <algorithm>
#include <utility>
 using namespace std;

int main (){
  //int x, y;
  //cin >> x >> y;
  //if(x > y) swap(x, y);
  //cout << x << " " << y << endl;
  
  int x, y;
  for(int i = 1; i < 10001; i++){
    cin >> x >> y;
    if((x == 0)&&(y == 0)) break;
    else if(x > y) swap(x,y);
    cout << x << " " << y << endl;
    }
}

