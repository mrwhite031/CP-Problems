#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int count;
    if(a == b && b == c){
        count = 1;
    }
    else if(a != b && a != c && b != c){
        count = 3;
    }
    else{
        count = 2;
    }

    cout<<count;
    return 0;
}