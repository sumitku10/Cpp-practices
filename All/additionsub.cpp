#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, sum = 0, i, marks[a];
    cout << " \nHow many number are use for (add,sub,multi,divd)  :\n";
    cin >> a;
    char c;
    cout << " \nEnter the operator('+,-,*,/') :\n";
    cin >> c;
    
    switch (c){
    case '+':
        for (i = 0; i < a; i++){

            cout<<"\nEnter number : ";
            cin>> marks[i];
            
        }
        for (i = 0; i < a; i++)
            sum = sum + marks[i];

        printf("\ntotal sum = %d", sum);
        break;
    /* case '-':
        for (i = 0; i < a; i++){
            cout<<"\nEnter number : ";
            cin>>marks[i];
        }
        for (i = 0; i < a; i++)
            sum = sum - marks[i];

        printf("\ntotal sum = %d", sum);
        break;
   case '*':
        for (i = 0; i < a; i++)
        {
            printf("\nEnter number : ");
            scanf("%d", &marks[i]);
        }
        for (i = 0; i < a; i++)
            sum = sum * marks[i];

        printf("\ntotal sum = %d", sum);
        break;
    case '/':
        for (i = 0; i < a; i++)
        {
            printf("\nEnter number : ");
            scanf("%d", &marks[i]);
        }
        for (i = 0; i < a; i++)
            sum = sum / marks[i];

        printf("\ntotal sum = %d", sum);
        break;*/
    default:
        cout << "I am still learning more !";
        break;
    }
    return 0;
}