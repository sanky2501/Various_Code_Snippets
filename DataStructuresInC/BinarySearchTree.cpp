#include<iostream>

using namespace std ;

typedef struct node {
    int data ;
    struct node * left ;
    struct node * right ;
} node ;

node * head = NULL ;

node * insertNode(node *head , int val){
    node *temp = new node ;
    temp -> data = val ;
    temp -> left = NULL ;
    temp -> right = NULL ;

    if (head == NULL){
        head = temp ;
        cout << head -> data << endl ; 
    }

    else {
        node *curr = head, *p ;
        while (curr){
            p = curr;
            if (curr -> data > val )
                curr = curr -> left ;

            else 
                curr = curr -> right ;
            if (curr)
                cout << curr -> data << endl ;
        }
        if (p -> data > val)
        p -> right = temp ;
        else 
        p -> left = temp ;
    }

    return head ;
}

int main () {
    cout << "Hello World" << endl ;
    char ans = 'y';
    int choice, data ;
    while (ans == 'y' || ans == 'Y'){
        cout << "Choose the operation to be carried out \n1.Insertion of Element\n";
        cin >> choice ;
        switch(choice){
            case 1: 
            cout << "Enter Data for new node \n";
            cin >> data ;
            head = insertNode(head , data);
            cout << "Operation successful\n";
            break;

            default:
            cout << "You had one job\n";
        }

        cout << "DO you want to continue (y/n) ? " << endl ;
        cin >> ans ;
    }

    cout << "Program successfully executed\n";
}