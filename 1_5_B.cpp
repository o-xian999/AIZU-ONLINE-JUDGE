#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
  int H, W;

  while(true){
    //cin >> H >> W;

    scanf("%d %d", &H, &W);
    if(H == 0 || W == 0) break;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        //if((i == 0)||(i == H - 1)||(j == 0)||(j == W - 1)) cout << "#";
        if((i == 0)||(i == H - 1)||(j == 0)||(j == W - 1)) printf("#");
        //else cout << ".";
        else printf(".");
      }
      //cout << endl;
      printf("\n");
    }
    //cout << endl;
    printf("\n");
    printf("\n");
  }
  return 0;
}
