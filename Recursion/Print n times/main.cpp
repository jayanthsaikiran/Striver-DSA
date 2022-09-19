#include <iostream>
using namespace std;

void repeat(int n) {
    if (n == 0) // base condition
        return ;
    cout<<"Saikiran"<<endl;
    repeat(--n);
}

int main() {
    int n;
    cin>>n;

    repeat(n);
}