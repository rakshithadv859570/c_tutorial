#include<iostream>
using namespace std;
int main(){
   int marks;
   cout<<"Enter the marks:";
   cin>>marks;
   if (marks>=81 and marks<100){
    cout<<"Distingtion";
   }
   else if(marks>70){
    cout<<"Good";
   }
   else if(marks>50){
    cout<<"Averaage";
   }
   else if (marks>35)
   {
   cout<<"pass";
   }
   else{
    cout<<"Fail";
   }
   
}