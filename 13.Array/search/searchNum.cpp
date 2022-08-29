#include<iostream>
using namespace std;
int main(){
    int array[100],i,size,pos=0,num,b;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter array "" " <<size<< " ""elements : "<<endl;
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Enter Element which we search : ";
    cin>>num;
    for(i=0;i<size;i++){
        if(array[i]==num){
           pos=i+1;
        }
    }
    if(pos>0){
        cout<<"Element " << num <<" found ";
    }
    else{
        cout<<"Element not found";
    }
    
    return 0;
}

