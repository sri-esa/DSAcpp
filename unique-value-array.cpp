#include <iostream>
using namespace std;
void uniqueval(int arr[],int sz){
    for(int i=0;i<sz;i++){
        bool isUnique=true;
        for(int j=0;j<sz;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
            }
        }
        if(isUnique)
        cout<<arr[i]<<endl; 
}
}
int main(){
    int array[]={1,2,3,1,2,3,4};
    cout<<"The unique values are:"<<endl;
    uniqueval(array,7);
    return 0;
}