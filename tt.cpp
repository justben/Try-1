#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

int isint(string s) // 判断s是否为正整数
{
  if(s.size() < 1) return 0;
  int start = 0;
  for(int i = start; i < s.size(); i++) {
    if(!isdigit(s[i])) return 0;
  }
  return 1;
}

int isdouble(string s) // 判断s是否为小数
{
  if(s.size() < 1) return 0;
  int start = 0;
  int dot = 0;
  if(s[0] == '-') start += 1;
  for(int i = start; i < s.size(); i++) {
    if(!isdigit(s[i])) {
      if(s[i] == '.') {
        if(dot) return 0;
        dot += 1;
      } else return 0;
    }
  }
  return 1;
}


int main()
{
  string ms = "";
  string ns = ""; // 矩阵的下标
  
  while(1) {
    cin >> ms;
    if(!isint(ms)) cout << "not int, please reinput" << endl;
    else break;
  }
  while(1) {
    cin >> ns;
    if(!isint(ns)) cout << "not int, please reinput" << endl;
    else break;
  }

  int m = atoi(ms.c_str());
  int n = atoi(ns.c_str());
  vector<vector<double> > matrix(m, vector<double>(n));

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      string value = "";
      while(1) {
        cin >> value;
        if(!isdouble(value)) cout << "not double, plsase reinput" << endl;
        else break;
      }
      matrix[i][j] = atof(value.c_str());
    }
  }
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
