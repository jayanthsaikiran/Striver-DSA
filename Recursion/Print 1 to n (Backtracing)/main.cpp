#include<iostream>
using namespace std;

void backTracing(int n,int m) {
    if (m < 1) {
        return;
    }
    backTracing(n,m-1);
    cout<<m<<endl;
}

int main() {
    int n;
    cin>>n;
    
    backTracing(n,n);
    return 0;
}