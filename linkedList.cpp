#include<iostream>
using namespace std;

class node{
    public :
    int data ;
     node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertatTail( node* &head,int val){
    node* n= new node(val);    // creating a empty node

    if(head == NULL){
        head = n;
        return ;
    }


    node * temp = head;   // create a var to store val of head

    while(temp ->next != NULL){
        temp = temp->next; // travers remaninig element
    }
    temp ->next =n;   // if all above are true then put n at next means at last elment for these function

}


void display(node *head){

    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
         temp= temp->next;

    }
    cout<<"NULL"<<endl;
    
}

void addathead(node * &head,int val){

    node* n = new node(val);

    n->next = head;//here apna nofnext point karraha hoga to the head 
    head= n;//then we store the value of n to the head


}

bool searching(node* head,int key){

    node* temp = head;

    while (temp !=NULL)
    {
        if(temp->data == key){
            return true;
        }
        temp = temp->next;//movig temp pointer move to next
    }
    return false;    
}


void delation(node* &head,int val){

    if(head == NULL){
        return ;
    }
    if(head->next == NULL){
        node* todelete = head;
        head = head->next;

        delete todelete;
    }
 

        node* temp = head;

        while(temp->next->data != val){
            temp = temp->next;
        }node* todelete= temp->next;
        temp->next= temp->next->next;

        delete todelete;
    }

void todeletehead(node* &head){
    node* todelete = head;
    head = head->next;

    delete todelete;
}

int main(){


    node * head = NULL;
    insertatTail(head,1 );
    insertatTail(head,2);
    insertatTail(head,3);
    addathead(head, 5);
    display(head);
    cout<<searching(head,4)<<endl;
    delation(head,2);
    display(head);
    todeletehead(head);
    display(head);
    return 0;
}