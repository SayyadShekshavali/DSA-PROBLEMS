#include<iostream>
using namespace std;
int main(){
    int Size;
   
    cout<<"Enter the Size of an Array:";
    cin>>Size;

     int Arrays[Size+1];
        //!!  Arrays crattion ??
    cout<<"Enter "<<Size<<"  Elements:"<<endl;
    for(int i=0;i<Size;i++){
    cin>>Arrays[i];
    }
      //!!  Arrays Deletion ??
  int delposition;
    cout<<"Enter  index number to delete:";
    cin>>delposition;
    delposition--;

      for(int i=delposition;i<Size-1;i++){
        Arrays[i]=Arrays[i+1];
    }
     Size--;
    cout<<"After Deletion:";
    for(int i=0;i<Size;i++){
        cout<<Arrays[i]<<" ";
    }
    
    cout<<endl;
      //!!  Arrays Insertion ??
    int position;
    cout<<"Enter the index number to insert:";
    cin>>position;
    int element;
    cout<<"Enter the element to insert:";
    cin>>element;
  
    position--;
    
    for(int i=Size;i>position;i--){
        Arrays[i]=Arrays[i-1];
    }

    Arrays[position]=element;
    cout<<"After insertion:";
    for(int i=0;i<=Size;i++){
        cout<<Arrays[i]<<" ";
    }
     cout<<endl;
  
   //!!  Arrays Searching ??
  int  find;
  int found;
    cout<<"Enter your number to search:";
    cin>>find;
    for(int i=0;i<Size;i++){
        if(Arrays[i]==find){
   found=i;
        }
    }
    if(found!=find){
      cout<<"The number "<<find<<" is found at index number:"<<found<<endl;
    }
    else{
      cout<<"The number "<<find <<" was not  found"<<endl;
      
    }

 }