#include<iostream>
using namespace std;
#include<string>
struct node{
    int data;
    struct node*links;
};
void add_at_end(struct node*head,int data){
    struct node*ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->links=NULL;
    while(ptr->links!=NULL){
        ptr=ptr->links;
    }
    ptr->links=temp;
};

int main()
{
    char head =NULL;
   add_at_end(head,67);
    
 return 0;
}
