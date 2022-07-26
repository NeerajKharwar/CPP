#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int num;
        cin>>num;
        long long int pro =1;
        int arr[num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
            pro=pro*1LL*arr[i];
        }
        if(pro%10==2||pro%10==3||pro%10==5)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}