#include <iostream>
using namespace std;

int main() {
    int n,x,y;
    cin>>n>>x>>y;

    int v= y/x;
    int result =(n+v-1)/v;

    cout<<result<<endl;

    return 0;
}