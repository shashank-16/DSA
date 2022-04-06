#include<iostream>
//eval() fucntion from python
class Stack{
    public:

    char data;
    Stack *next;

    // void push()
    // {
        
    // }

};


int eval(const char* expression)
{
    char add='+';
    char sub='-';
    char multi='*';
    char divi='/';

    return 1;

}

int main()
{
    int n;
    std::cin>>n;
    int b= (n*2) -1;
    int space = n;
    int las_col= b-1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(j==space-1 || (i+j == b-1) )
            {
                std::cout<<"*"<<" ";
            }
            
            else{
                std::cout<<"  ";

            }
        }
        space--;

        std::cout<<std::endl;

    }

}