#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            int k=r/2;
            if(j==k || i==k ){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}