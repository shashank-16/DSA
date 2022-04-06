#include<bits/stdc++.h>
using namespace std ;

list<int> sha(list<int> a,list<int> b)
{
    
    list<int> sum;
    stack<int>stack_a;
    stack<int> stack_b;
    for(list<int>::iterator temp= a.begin();temp!=a.end();temp++)
    {
        stack_a.push(*temp);
    }

    for(list<int>::iterator temp= b.begin();temp!=b.end();temp++)
    {
        stack_b.push(*temp);
    }


    
    int carry = 0;
    int i;
    int j;
    int result;
    int ha; 
   
    while(1)
    {
        if(stack_a.size()!=0 && stack_b.size()!=0)
        {
            i =stack_a.top();
            j=stack_b.top();  
            stack_a.pop();
            stack_b.pop();
            result = i+j+carry;
            carry = result/10;
            ha =result%10;
            sum.push_front(ha); // carry 

        }
        else if(stack_a.size()!=0)
        {
            result = stack_a.top();
            stack_a.pop();
            result= result+carry;
            carry=result/10;
            ha= result%10;
            sum.push_front(ha);

        }else if(stack_b.size()!=0){
             result = stack_b.top();
            stack_b.pop();
            result= result+carry;
            carry=result/10;
            ha =result%10;
            sum.push_front(ha);
        }
        else{
            break;
        }

    }
    if(carry == 0)
    {
        return sum;
    }
    sum.push_front(carry);
    return sum;
    
}


int main()
{
    int x,y;
    std::cin>>x;
    int value =0;
    list<int> adding ;
    list<int> shashan;

    for(int i =0;i<x;i++)
    {
    
        std::cin>>value;
        adding.push_back(value);
    }

    std::cin>>y;

    for(int i=0;i<y;i++)
    {
   
        std::cin>>value;
        shashan.push_back(value);
    }
   list<int> sum =  sha(adding,shashan);
   for(list<int>::iterator temp= sum.begin();temp!=sum.end();temp++)
    {
        std::cout<<*temp<<" ";
    }

    int front ,back;
    std::cin>>front>>back;

sum.push_front(front);
    sum.push_back(back);
       for(list<int>::iterator temp= sum.begin();temp!=sum.end();temp++)
    {
        std::cout<<*temp<<" ";
    }

    return 0;
} 