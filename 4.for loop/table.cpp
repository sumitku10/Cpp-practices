 #include<iostream>
 using namespace std;

 int main()
 {
    int i;
    int sum=0;
    for(i=1;i<=10;i++)
    {
        cout<<2*i<<endl;
        sum=sum+i;
    }
    cout<<"sum of all is : "<<sum;
    return 0;
 }