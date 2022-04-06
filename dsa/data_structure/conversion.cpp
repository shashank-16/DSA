#include<bits/stdc++.h>

int prece(char oper)
{
    if(oper == '+')
    {
        return 1;
    }
    else if(oper == '-')
    {
        return 1;
    }
    else if(oper == '*')
    {
        return 2;
    } 
    else if(oper == '('){
        return 3;
    }
    else{

    }
    return 0;
}

int main()
{
    std::string exp;
    std::cin>>exp;
    std::stack<char> operat; 
    std::stack<const char*> postix;
    for(int i =0;i<exp.length();i++)
    {
        char symbol=exp.at(i);
        if(symbol == '+' || symbol == '-' || symbol == '/' || symbol == '*' || symbol == '(')
        {
            // if(prece(symbol) == prece(operat.top()))
            // {

            // }
            operat.push(symbol);
            std::cout<<"element at top stack of opertor" <<operat.top()<<std::endl;
        }
        else{
            std::cout<< symbol;
            postix.push(symbol+"");
            // std::cout<<postfix.top();
            std::cout<<"element at top stack of postfix" <<postix.top()<<std::endl;
        }
    }
    return 0;
}