#include<iostream>

using namespace std;
int main(){
    int size;
     cout<<"Enter the size of Array:";
    cin>>size;
    int Array[size];
    cout<<"Enter the "<<size<< " elements:";
    for(int i=0;i<size;i++){
        cin>>Array[i];
    };
    cout<<endl;
    int min=Array[0];
    int max=Array[0];
    for(int i=0;i<size;i++){
        if(Array[i]<min){
            min=Array[i];
        }
         if(Array[i]>max){
          max=Array[i];
         }
    }
        cout<<"Minimum NUmber is :"<<min<<endl;
         cout<<"Maximum NUmber is :"<<max;
cout<<endl;

cout<<"Reversed Array is :";
         for(int i=size-1;i>=0;i--){
            cout<<" "<<Array[i];
         }
    return 0;

}