// simple calculator

#include<iostream>
using namespace std;

int add(int a, int b){
  // code here 
  return a+b;
}

int subtract(int a, int b){
  return a-b;
}

int main() {
  int a=4, b=5;
  cout<<add(a,b)<<endl;
  cout<<subtract(a,b)<<endl;

  return 0;
}
