#include<iostream>
using namespace std;

void backTracing(int n,int m) {
    if (m > n) {
        return;
    }
    backTracing(n,m+1);
    cout<<m<<endl;
}

int main() {
    int n;
    cin>>n;
    
    backTracing(n,1);
    return 0;
}