/*1 2 3 4 5 5 4 3 2 1
 1 2 3 4 * * 4 3 2 1
 1 2 3 * * * * 3 2 1
 1 2 * * * * * * 2 1
 1 * * * * * * * * 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1; i<=n;i++){
        for(int x=1;x<=n-i+1;x++){
            cout<<x;
        }
        for(int m=1;m<=2*(i-1);m++){
            cout<<"*";
        }
        for(int z=n;z>=(i-1);z--){
            cout<<z;

        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    for(int i = 1; i<=n;i++){
        for(int x=1;x<=n-i+1;x++){
            cout<<x;
        }
        for(int m=1;m<=2*(i-1);m++){
            cout<<"*";
        }
        for(int z=n;z>=i;z--){
            cout<<z-i+1;

        }
        cout<<endl;
    }
}