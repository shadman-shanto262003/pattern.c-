#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i==j || i+j==r-1 ||i==0 || i==r-1){
                cout<<"* ";
            }
            
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}

// *       *
//   *   *  
//     *
//   *   *  
// *        *