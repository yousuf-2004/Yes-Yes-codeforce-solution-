#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    string m="";
    for(int i=1;i<=100;i++){
        m=m+"Yes";
    }
    bool sub=false;
    for(int i=0;i<m.size();i++){
        if(m.substr(i,s.size())==s){
            sub=true;
            break;
        }
    }
    if(sub){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
