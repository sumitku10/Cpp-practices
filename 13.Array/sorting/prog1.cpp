#include<iostream>
using namespace std;
#include<string>
int main()
{
   int array[100],num;
   cout<<"Enter the size of array : ";
   cin>>num;
   cout<<"Enter the array element : ";
   for(int i=0;i<num;i++){
       cin>>array[i];
   }

   for(int i=0;i<num-1;i++){
       for(int j=i+1;j<num;j++){
           if(array[j]<array[i]){
               int temp=array[j];
               array[j]=array[i];
               array[i]=temp;
           }
       }
   }
   cout<<"After sorting elements :"<<endl;
   for(int i=0;i<num;i++){
       cout<<array[i]<<endl;
   }
   
 return 0;
}