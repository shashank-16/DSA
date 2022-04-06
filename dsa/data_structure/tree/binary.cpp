#include<iostream> 
#include<string>
#include <vector>


class node{
    public:

    int data;
    node *left;
    node *right;

    public: 

    node()
    {
        data = NULL;
        left = nullptr;
        right = nullptr;

    }
    node(int data,node *left,node *right)
    {
        this->data  = data;
        this->left = left;
        this->right= right;
    }

    void construct(std::string arr[],int lenght,node *root);

};

class pair{
    public:
    int state=0;
    node *root;

    pair(node *temp,int state)
    {
        this->root = temp;
        this->state = state;
    }
};


void node::construct(std::string arr[],int lenght,node *root)
{
    std::vector<pair> maze ;
    pair topper(root,0);
    maze.push_back(topper);

    int value;
    for(int i=0;i<lenght;i++)
    {
        value = std::stoi(arr[i]);

    }
    
}

int main()
{
    node *root = new node();
    int length;
    std::cin>>length;
    std::string arr[length];

    for(int i =0;i<length ;i++)
    {
        std::cin>>arr[i];
    }
    root->construct(arr,length,root);

    return 0;

}