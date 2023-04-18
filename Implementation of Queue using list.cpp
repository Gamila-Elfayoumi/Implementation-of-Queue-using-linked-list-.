#include <iostream>
using namespace std;
class Node {
public :
    int data;
    Node* next;
};
void enqueue(Node** head, int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
void dequeue(Node** head) {
    if (*head == NULL) {
        cout << "the linked list is empty";
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    delete(temp);
}
void display(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    enqueue(&head, 10);
    enqueue(&head, 20);
    enqueue(&head, 30);
    enqueue(&head, 40);
    cout << "The queue using enqueue function before using the delete function dequeue:" << endl;
    display(head);
    dequeue(&head);
    cout << "The queue after using the dequeue function that delete the last element:" << endl;
    display(head);
    system("pause");
}


