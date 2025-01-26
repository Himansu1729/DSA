#include<iostream>
#include<cmath>
using namespace std;

int main(){
        int n,p;
        cout<<"enter n:";
        cin>>n;
        p=n;
        cout<<1<<endl;
        for(int i=2;n!=1;i++){
                for(int j=i;n%j==0;j*=1){
                        cout<<j<<endl;
                        n/=j;
                }
        }
        cout<<p<<endl;
}