//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_D&lang=ja
#include <iostream>

using namespace std;

int main(){
  int n, i = 1;
  cin >> n;

  while(i <= n){
    int x = i;
    if(x % 3 == 0) cout << " " << i;
    else{
      while(x){
        if(x % 10 == 3){
          cout << " " << i;
          break;
        }else{
          x /= 10;
        }
      }
    }
    ++i;
  }

  cout << endl;
}
//
//#include <cstdio>
//
//int main(){
//	int n, i=1;
//	scanf(" %d", &n);
//
//	while(i <= n){
//		int x=i;
//
//		if(x%3==0) {
//			printf(" %d", i);
//		}
//		else {
//			while(x){
//				if(x%10==3){
//					printf(" %d", i);
//					break;
//				}
//				else x/=10;
//			}
//		}
//
//		++i;
//	}
//	printf("\n");
//
//	return 0;
//}
