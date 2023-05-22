#include<iostream>
using namespace std;

class newNode {
    public: 
        int data;
        newNode* next;

        //Constructor
        newNode(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

int main() {
    newNode* node1 = new newNode(15);
    cout << node1 -> data <<endl;
    cout << node1 -> next <<endl;
}