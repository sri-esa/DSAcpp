#include <iostream>
using namespace std;
int main(){
    int i,j,k,l,n;
    cout<<"Enter a number:";
    cin>>n;
    //top
    //outer loop
    for(i=0;i<n;i++){
    //inner loop1
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        //space
        for(k=0;k<2*(n-i)-2;k++){
            cout<<" ";
        }
        //inner loop2
        for(l=0;l<i+1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(i=0;i<n;i++){
    //inner loop1
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        //space
        for(k=0;k<2*i;k++){
            cout<<" ";
        }
        //inner loop2
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}