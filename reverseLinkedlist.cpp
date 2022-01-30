#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;


    node(int val){
        data = val;
        next =NULL;
    }
};

void insertatTail(node* &head,int val){



    node* n = new node(val);// new node

    if(head == NULL){
        head = n;
        return ;
    }

    node* temp = head;//iterator for traversing the element first node to last node

    while(temp->next != NULL){
        temp= temp->next;// is shows all nodes become temp and goes to the end
    }
    temp->next =n;//at temp next encunter then add our new node



}


void insertathead(node* &head , int val){

    node* n = new node(val);

    if (head == NULL){
        head = n;
        return ;
    }


    n->next = head;// n should be point on head then head is n puting values as n
    head = n;
}

void display(node* head){

    node* temp = head;// create a iterator to traverse the element from first to last

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;// traverse each and every element
    }
    cout<<"NULL"<<endl;
}

bool search(node *head, int key){
    node* temp = head;
    while (temp != NULL)
    {
        if(temp->data == key){
            return true;
        }temp = temp ->next;
    }return false;
    
}

void delationofnode(node* &head,int val){
    if(head == NULL){
        return ;
    }

    if(head->next == NULL){
        node* todelete = head;
            head = head->next;

            delete head;
    }


//here one thing happpen we not find which element is deleted here we find n-1th postion 
//to delete next

    node* temp = head;

    while(temp->next->data != val)
    //here means we search for the n-1th node of our linkedlist
    {
        temp = temp->next;//travese each node inlinked list
    }

    node* todelete = temp->next;// create an node to delete temp which is our temp is now
    temp->next= temp->next->next;//here we give our next node attach to previous one

      delete todelete;


}


void deleationofhead(node* &head){
    node* todelete = head;
        head = head->next;//here after deltion we move our head to the next node

     delete todelete;

}


node* toreverselinkedlist(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    

    while(currptr != NULL){
        nextptr= currptr->next;//we can traveres all element

        currptr->next =prevptr;
        prevptr = currptr;
        currptr =nextptr;
    }
    return prevptr;//current head
}









int main(){

    node* head = NULL;

    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);

    display(head);
    //insertathead(head,5);
   // display(head);

  //  cout<<search(head, 3)<<endl;

    //delationofnode(head,3);
   // display(head);


    node* newhead = toreverselinkedlist(head);
    display(newhead);

    return 0;
}