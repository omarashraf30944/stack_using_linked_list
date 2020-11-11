#include <iostream>
using namespace std;

    
class stack{
    struct node{
      int item;
      node *next;  
    };
private:
    node *top;
    node *bottom;
public:
    stack(){
        top = bottom = NULL;
    }
    bool isEmpty(){
        return top == NULL;
    }
    
    void push(int element){

            node *newnode = new node;
            newnode->item = element;
            newnode->next = top;
            top = newnode;
    }
    
    
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty "<<endl;
        }else{

            node *curr = top;
            top = top->next;
            curr->next = NULL;
            delete curr;
        }
    }
    void getTop(){
        if(isEmpty()){
            cout<<"the stack is empty "<<endl;
        }else{
            cout<<"the top element is " <<top->item <<endl;
        }
    }
    
    void display(){
        if(isEmpty()){
            cout<<" the stack is empty " <<endl;
        }else{
            node *curr = top;
            cout<<"[ ";
            while(curr != NULL){
                cout<<curr->item<<" ";
                curr = curr->next;
            }
            cout<<" ]"<<endl;
        }
    }

};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.getTop();
    s.pop();
    s.pop();
    s.display();
 return 0;
 
 }