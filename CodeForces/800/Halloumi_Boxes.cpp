#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int arr[x];
        for(int i = 0; i < x; i++){
            cin>>arr[i];
        }
        if(y >= 2){
            cout<<"YES"<<endl;
        }
        else{
            int okay = 1;
            for(int i = 0; i < x - 1; i++){
                if(arr[i] > arr[i+1]){
                    okay = 0;
                }
            }
            if(okay) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}