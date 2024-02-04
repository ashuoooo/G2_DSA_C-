#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"enter n:";
  cin>>n;
  int r=0;
  
  while(r<n){
       int j=0;
       while(j<n-r){ 
           cout<<j+1;
           j++;
           
       }
       if(r>=1){
        int star = 0;
        while (star < 2 * r) {
            cout << "*";
            star++;
        }
       }
       while(j>=1){
           cout<<j;
           j--;
       }
       cout<<endl;
       r++;
      }
     
}
