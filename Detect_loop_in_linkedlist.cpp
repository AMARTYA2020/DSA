//Linkedlist GFG
// Contributed by Amartya Pandey 31st january 2021

// here we use two pointer approach rabbit and totoise pointers the rabbit pointer goes twice as fast then tortoise pointer
// and if the rabbit and tortoise pointer meets then there exists a loop
bool detect_loop(Node* head)
{
    // Initializing the fast and slow pointers
    Node* fastptr=head;
    Node* slowptr=head;
    while(fastptr!=NULL && fastptr->next!=NULL){
        fastptr=fastptr->next->next;
        slowptr=slowptr->next;

        if(fastptr==slowptr){
            return true;
        }
    }
    return false;
}
