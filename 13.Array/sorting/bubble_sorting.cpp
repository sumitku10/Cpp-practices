// Bubble shorting 

#include<iostream>
using namespace std;
#include<string>
int main()
{
  int array[100],size,i,pos,num;
  cout<<"Enter the size of array : ";
  cin>> size;
  cout<<"Enter the array element : "<<endl;
  for(i=0;i<size;i++){
    cin>>array[i];
  }  
  int counteer=1;
  while(counteer<size){
    for(i=0;i<size-counteer;i++){
      if(array[i]>array[i+1]){
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
      }
    }
    counteer++;
  }
  cout<<"after sorting : "<<endl;
  for(int i=0;i<size;i++){
    cout<<array[i]<<endl;
  }
  cout<<"Enter number which we search : ";
  cin>>num;
  for(i=0;i<size;i++){
    if(array[i]==num){
      pos=i+1;
    }
  }
  if(pos>0){
    cout<<"Number " << num <<" found ";
  }
  else{
    cout<<"Number not found";
  }
    
   
 return 0;
}