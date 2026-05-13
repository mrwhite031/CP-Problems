#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int check = b*b-4*a*c;

    if(check < 0){
      cout<<"No roots";
    }
    else if(check == 0) {
        int r=-b/(2*a);
        cout<<"One root: "<<r;
    }
    else{
        int r1 =(-b + sqrt(check)) / (2 * a);
        int r2 =(-b - sqrt(check)) / (2 * a);
        cout<<"Two roots: "<<min(r1,r2)<<" "<<max(r1,r2);
    }

    return 0;
}