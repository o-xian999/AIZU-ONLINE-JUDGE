//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_A

#include <iostream>

using namespace std;

int main (){
  int H, W;
  //問答無用で300会回ってた　presentation error
  //for(int k = 0; k < 300; k++){
  while(true){
    cin >> H >> W;
    if((H == 0)&&(W == 0)) break;
    for(int i = 0; i < H; i ++){
      for(int j = 0; j < W; j++){
        cout << "#";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
