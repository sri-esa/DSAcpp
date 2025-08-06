#include <iostream>
using namespace std;
int main(){
    int i,j,k,l,n;
    cout<<"Enter a number:";
    cin>>n;
    //top
    //outer loop
    for(i=0;i<n;i++){
    //space1
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<"*";
    //space2
    if(i!=0){
        for(k=0;k<2*i-1;k++){
            cout<<" ";
        }
        cout<<"*";
    }
        cout<<endl;
    }
    //bottom
    for(i=0;i<n-1;i++){
    //space1
    for(j=0;j<i+1;j++){
        cout<<" ";
    }
    cout<<"*";
    //space2
    if(i!=(n-2)){//(n-2) indicates last line
        for(k=0;k<2*(n-i)-5;k++){
            cout<<" ";
        }
        cout<<"*";
    }
        cout<<endl;
    }
    return 0;
}