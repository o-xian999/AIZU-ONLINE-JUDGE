//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D

#include <iostream>
#include <vector>
#include <algorithm>
//#include <functional>

using namespace std;

int main (){
  //vector<int> vec(10003);

  //for(int i = 0; i < vec.size(); i++){
    //cin >> vec[i];
    //cout << vec[i] << endl;
  //}

  //long long n, sum = 0;
  //vector<int> vec(10000);

  //cin >> n;
  //for(int i = 0; i < n; i++){
    //cin >> vec[i];
    //if(i >= 2) sum = vec[i] + vec[i-1];
    //sum += vec[i];
    //cout << vec[i] << endl;
  

  //cout << sum << endl;

  //stable_sort(vec.begin(), vec.end());
  //cout << vec[1] << vec[2] << vec[3] << vec[4] << endl;
  //cout << vec[1] << endl;

  //cout << *min_element(vec.begin(), vec.end()) << endl;

  //sort(vec.begin(), vec.end(), greater<>());
  //cout << vec[0] << endl;

  //cout << sum << endl;

  long long n, sum = 0;
  int a[10002];
  
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  long long value_max = a[0];
  long long value_min = a[0];

  for(int i = 0; i < n; i++){
    sum += a[i];
    if(value_max < a[i]){
      value_max = a[i];
    }else if(value_min > a[i]){
      value_min = a[i];
    }
  }

  cout << value_min << " " << value_max << " " << sum << endl;
}
