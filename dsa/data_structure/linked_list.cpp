#include<iostream>
#include<string>

struct node{
    int data;
    node *next;
};

class list{
    public:
    // private:

    int size=0;
    node *head;
    node *tail;

    public:
    void add(int value)
    {
        node *temp = new node();
        temp->data=value;
        temp->next=NULL;
        if(size == 0)
        {
            head= tail= temp;
        }else{
            tail->next=temp;
            tail= temp;
        }
        size++;
    }

     void display()
    {
        for(node *temp = head; temp!=NULL ; temp = temp->next)
        {
            std::cout<<temp->data<<std::endl;
        }
        std::cout<<size;
    }

    void removefromFirst()
    {
        if(size == 0)
        {
            std::cout<<-1;

        }
        else{
        node *temp= new node();
        temp=head;
        head = temp->next; // somewhere will be there is the memory allocation 

        size--;
        delete(temp);
        }
    }

    void getfirst()
    {
        std::cout<<head->data;
    }
    void getlast()
    {
        std::cout<<tail->data;
    }

    void getat(int value)
    {
        node *temp = new node();
        temp= head;
        for(int count=1 ; count!=size+1 ;count++)
        {
            if(count == value)
            {
                std::cout<<temp->data;
                return;
            }
            temp=temp->next;
        }
    }

    void insertfirst(int value)
    {
        node *temp = new node();
        temp->data= value;
        temp->next= head;
        head =temp;
        size++;
    }

    void insertat(int loc, int value)
    {
        node *temp = new node();
        temp->data=value;
        temp->next=NULL;

        node *travel = head;

         for(int count=1 ; count!=size+1 ;count++)
        {
            if(count == loc-1)
            {
                // 1->new ->2 -> 3 -> 4-> 5-> 
               temp->next= travel->next;
               
                travel->next = temp; //1->new
               size++;
            }
            travel=travel->next;
        }

    }   

    void removelast()
    {
        node *temp = tail;
        node *trev = head;
        for(int count= 1 ;count<size;count++)
        {
            if(size == 0)
            {
                return;
            }
            else{
                if(count == size -1 )
                {
                    tail = trev;
                    trev->next = NULL;
                    delete(temp);
                    size--;
                }
                trev= trev->next;
            }
        }

    }

    void removeat(int loc)
    {
    node *temp = new node();
    node *trev = head;
        for(int count= 1 ;count<=size;count++) // 1->2 -> 3 -> 4 -> 5
        {
            if(size == 0)
            {
                return ;
            }
            else{
            
             if(count == loc-1 )
                {
                    temp=trev->next;
                    trev->next = trev->next->next;
                    delete(temp);
                    size--;
                    return;
                }
                trev= trev->next;
            }
        }
    }
    void reverse_linked_list()
    {   
        node *temp =  new node();
        node *osn= new node();
        node *te = head;
        bool first= true;

        while(te!=NULL)
        {
            temp= te;
            osn = te->next; //taking the  addrres of the node 
            // std::cout<<"processing the revrsing"<<temp->data<<std::endl;
            if(first)
            {
                temp->next=NULL;
                head = temp;
                first =false;
            }else{
                // std::cout<<"inside"<<std::endl;
                temp->next=head;
                head=temp;
            }
           te=osn;
        }
    }   

    void kthnodeFromEnd(int pos)
    {
        int count=1;
        for(node *temp = head;temp!=NULL;temp=temp->next)
        {
            if(count==pos+1)
            {
                std::cout<<temp->data;
            }
            count++;
        }
    }
};

void mid(list *lis)
{
    node *slow = lis->head;
    node *fast= lis->head;
    while(slow!=NULL && fast!=NULL)
    {
        if(fast->next!=NULL)
        {
            fast=fast->next->next;
        }else{

            break;
        }
        slow = slow->next; // placing the slow downward will help to find the result;
    }
    std::cout<<slow->data;

}

int main()
{
    list *root = new list();
    root->add(10);
    root->add(20);
    root->add(30);
    root->add(40);
    root->add(50);
    root->display();
    root->reverse_linked_list();
    root->display();

    root->kthnodeFromEnd(0);
    mid(root);

    return 0;
}
// slow 1 ,2,3
// fast 1,3,5