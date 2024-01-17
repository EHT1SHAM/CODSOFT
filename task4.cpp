#include<iostream>
using namespace std;
class node{
    public:
    string task;
    string status;
    node *next;

    
    node(string task,string status){
        this->task=task;
        this->status=status;
        next=NULL;
    }
} ;
void addtask(node* &head,string task,string status){
    if(head==NULL){
        head=new node(task,status);
        return;

    }

    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new node(task,status);
    return;

        
}
void print(node *head){
    while(head!=NULL){
        cout<<head->task<<" "<<head->status<<endl;
        head=head->next;
    }
}
void deletetask(node* &head,string task){
    if(head==NULL){
        return;
    }
    if(head->task==task){
        node *temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node *temp=head;
    while(temp->next->task!=task){
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    return;
}
int  main(){
    node *head=NULL;
    
    while (true)
    {
        cout<<"1. Add task"<<endl;
        cout<<"2. Delete task"<<endl;
        cout<<"3. Print task"<<endl;
        cout<<"4. Exit"<<endl;
        int choice;
        cin>>choice;
        if(choice==1){
            string task,status;
            cout<<"Enter task"<<endl;
            cin>>task;
            cout<<"Enter status"<<endl;
            cin>>status;
            addtask(head,task,status);
        }
        else if(choice==2){
            string task;
            cout<<"Enter task"<<endl;
            cin>>task;
            deletetask(head,task);
        }
        else if(choice==3){
            print(head);
        }
        else if(choice==4){
            break;
        }
        else{
            cout<<"Invalid choice"<<endl;
        }

    }

    return 0; 

     }