//logic revise
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long n, m, k;
        cin >> n >> m >> k;
        cout << min(n, k) * min(m, k) << endl;
    }
    return 0;
}