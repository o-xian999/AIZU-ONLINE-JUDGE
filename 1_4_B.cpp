#include <iostream>
//using the value of π
#include <bits/stdc++.h>
//using setprecision
#include <iomanip>

using namespace std;

int main (){
  double r;
  cin >> r;
  cout << fixed << setprecision(6)  << r * r * M_PI << " " << fixed << setprecision(6) <<  2 * M_PI * r << endl;
}
