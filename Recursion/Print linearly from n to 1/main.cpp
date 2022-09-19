#include <iostream>
using namespace std;

void printLin(int n,int val) {
  if (val < 0)
    return;
  
  cout<< (n-val)<<endl;
  val--;
  printLin(n,val);
}

int main() {
  int n;
  cin>>n;
  
  printLin(n,n-1);
  
  return 0;
}