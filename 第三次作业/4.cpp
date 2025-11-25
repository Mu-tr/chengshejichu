#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    cin>>N;
    string s=to_string(N);
    int n=s.length();  
    if(N==0){
        cout<<"0";
    }
    else{
            for(int i=0;i<n;i++){
            cout<<s[i]-'0';
                if(i<n-1){
                    cout<<"   ";
            }
        }
    }

    
}