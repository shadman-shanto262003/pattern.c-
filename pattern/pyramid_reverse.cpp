#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<k<<" "; 
        }
        if(i>=2){
            for(int p=i-1;p>=1;p--){
                cout<<" "<<p;
            }
        }
        cout<<endl;
    }
}