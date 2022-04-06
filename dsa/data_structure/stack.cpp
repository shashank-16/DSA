#include<iostream>
#define MAX_SIZE 100

template<class T> class stack{
    private:
    int top=0;
    long int size=0;
    T array[0];
    int cap;

    public:
    stack(int less){
        cap=less;
        std::cout<<cap;
        array[less];
        array[top]=0;
    }

    void displayEveryValue()
    {
        for(int i=top-1;i>=0 ;i--)
        {
            std::cout<<array[i]<<" ";
        }
    }
    void insertatend(T data)
    {
        if(top>=cap)
        {
            std::cout<<"Stack overflow";
            return;
        }
        else{
            top++;
            ++size;
            array[top]=data;
        }
    }

    void getvalue()
    {
        T value= array[top];
        std::cout<<value;
    }

    void getsize()
    {
        std::cout<<size;
    }
   void removeElement()
   {
       if(top == 0)
       {
           std::cout<<"Stack underflow"<<std::endl;
       }
       else{
        array[top]=0;
        top--;
        --size;
       }
   }

   void getcap()
   {
    std::cout<<this->cap;
   }
    
};
int main()
{
    int n;
    std::cin>>n;
    stack<int> *world = new stack<int>(n);
    std::string funct;
    int data;
    while(true)
    {
        std::cin>>funct;
       if(funct == "quit")
       {
           break;
       }
        else if(funct == "pop")
        {
            world->removeElement();
        }
        else if(funct == "top")
        {
            world->getvalue();
        }
        else if(funct == "display")
        {
            world->displayEveryValue();
        }
        else if(funct == "size")
        {
            world->getsize();
        }
        else if(funct == "push")
        {
            std::cin>>data;
            world->insertatend(data);
        }
        else if(funct == "cap")
        {
            world->getcap();
        }
    }
    
    
    return 0;
}