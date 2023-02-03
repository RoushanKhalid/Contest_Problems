#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n2,x=0,y=0,count=0;
    cin>>n;
    while(n--){
        string str;
        cin>>n2;
        cin>>str;
        for(int i=0;i<n2;i++){
            if(str[i]=='U'){
                y++;
            }else if(str[i]=='D'){
                y--;
            }else if(str[i]=='L'){
                x--;
            }else if(str[i]=='R'){
                x++;
            }
            if(x==1 && y==1){
                count=1;
            }
        }
        if(count==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        x=0;
        y=0;
        count=0;
    }
    return 0;
}