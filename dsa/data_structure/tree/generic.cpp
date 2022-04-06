#include<iostream> 
#include<stack>
#include<list>

struct node{
    int data;
    std::list<node> children;
};

// class sasta_tree{

// }
int main()
{
    node *root;
    using namespace std;
    stack<node> *helper;
    int n;
    std::cin>>n;

    int arr[n];

    for(int i =0 ;i<n;i++)
    {
        std::cin>>arr[i];

    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] == -1)
        {
            helper->pop();
        }
        else{
            node *temp = new node();
            temp->data=arr[i];
         
            if(helper->size() >0 )
            {
                
            }
            else{
                root=temp;
            }
            helper->push(temp);

        }
    }

}