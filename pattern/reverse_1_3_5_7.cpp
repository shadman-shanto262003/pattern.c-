#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=r;i>=1;i--){
        
        for(int j=1;j<=2*i-1;j=j+2){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
}


// 1 3 5 7
// 1 3 5
// 1 3
// 1