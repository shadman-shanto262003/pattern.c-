// A B C D 
// A B C D 
// A B C D 
// A B C D


#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        int a=1;
        for(int j=1;j<=r;j++){
            int d=a+64;
            char ch=d;
            cout<<ch<<" ";
            a++;
        }
        cout<<endl;
    }
}