#include<iostream>
using namespace std;
int main(){
    int array[200],i,j,size;
    cout<<"Enter the size of Array";
    cin>>size;
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    for(i=0;i<size;i++){
        cout<<array[i];
    }

 return(0);
}