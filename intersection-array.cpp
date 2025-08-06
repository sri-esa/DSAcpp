#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int sz1,int sz2){
    for(int i=0;i<sz1;i++){
        //skip repeating values
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted) continue;
        //find common values
        bool isCommon=false;
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
                isCommon=true;
                break;
            }
        }
        if(isCommon)
        cout<<arr1[i]<<endl; 
    }
}
int main(){
    int array_one[]={1,2,3,4,5};
    int array_two[]={6,7,3,1};
    int sz1,sz2;
    sz1=sizeof(array_one)/sizeof(array_one[0]);
    sz2=sizeof(array_two)/sizeof(array_two[0]);
    cout<<"The common values are:"<<endl;
    intersection(array_one,array_two,sz1,sz2);
    return 0;
}