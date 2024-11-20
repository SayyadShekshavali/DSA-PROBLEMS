#include<iostream>
using  namespace std;
#include<string>
int main(){
 string str="Bharat";
 int length=sizeof(string);
 
  //! Inserting a String !//

 int sindex;
 cout<<"Enter a index number you want to insert:";
 cin>>sindex;
 char word;
 cout<<"Enter element you wnat to insert:";
 cin>>word;
 cout<<str.insert(sindex,1,word);

// ! Replacing|| MOdifying String //
 
 int rindex;
 char rword;
 int nonum;
 cout<<"Enter the numeber number to repalce :";
 cin>>rindex;
 cout<<"Enter how many letter to insert:";
 cin>>nonum;
 cout<<"Enter element you wnat to insert:";
 cin>>rword;
 cout<<str.replace(rindex,nonum,1,rword);
 
 //! Deleting Character !//

 int difrom;
 int dito;
 cout<<"Enter the from index number to erase :";
 cin>>difrom;
 cout<<"Enter the to index number to erase:";
 cin>>dito;
 cout<<str.erase(difrom,dito);

//! Concatenation of charcters !//

string s1;
string s2;
cout<<"Enter the string one :";
cin>> s1;
cout<<"Enter the string two:";
cin>> s2;
cout<<s2.append(s1);

 //! Substring Extraction !//

 int windex;
 int wnum;
 cout<<"Enter the index numer where you want:";
 cin>>windex;
 cout<<"Enter how many characters you want:";
 cin>>wnum;
 cout<<s1.substr(windex,wnum);


 }
 