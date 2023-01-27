#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    string pi="314159265358979323846264338327";
    int test,count=0;
    cin>>test;
    while(test--){
        cin>>num;
        for(int i=0;i<num.size();i++){
            if(num[i]==pi[i]){
                count++;
            }else{
                break;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}