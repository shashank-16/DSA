#include<iostream>
#include<stack>
#include<string>

int main()
{
    std::string exp;
    std::cin>>exp;
    std:
    bool copy=false;
    char stak[1];
    // stak[0]=NULL;
    // int top=0;

    // for(int i=0;i<exp.length();i++)
    // {  
    //     if(top<1)
    //     {
            
    //         if(ch == '(')
    //         {
    //             stak[top]='(';
    //             top++;
    //         }
    //         if(ch== ')')
    //         {
    //             top--;
    //             stak[top]='0';

    //         }
    //     }
    //     else{
    //         copy=true;
    //         break;
    //     }
    // }

    // if(copy == true)
    // {
    //     std::cout<<"true";
    // }
    // else{
    //     std::cout<<"false";

    // }

    std::stack<char> box;

    for(int i=0;i<exp.length();i++)
    {
        char ch= exp.at(i);
        if(ch == '(' || ch == '[' || ch=='{')
        {
            std::cout<<"push"<<std::endl;
            box.push(ch);
        }
        else if(ch == ')')
        {
            char to= box.top();
            if(to == '(')
            {
            std::cout<<"pop"<<std::endl;

             box.pop();
            }
        }
        else if(ch == '}')
        {
             char to= box.top();
            if(to == '{')
            {
            std::cout<<"pop"<<std::endl;

             box.pop();
            }
        } 
        else if(ch == ']')
        {
             char to= box.top();
            if(to == '[')
            {

            std::cout<<"pop"<<std::endl;
             box.pop();
            }
        }   
        else{

        }     
    }
    
    std::cout<<box.empty();
    std::cout<<box.top();
    // if(box.empty())
    // {
    //     std::cout<<"true";
    // }
    // else{
    //     std::cout<<"false";
    // }

    
    #ifdef road
    int n;
    std::cin>>n;

    int world[n+1][2];
    for(int i=0;i<n+1;i++)
    {
        std::cin>>world[i][0];
        std::cin>>world[i][1];
    }
    int max_road=n;
    int min_road=0;

    int intial_x=world[0][0];
    int intial_y=world[0][1];

     for(int i=1;i<n+1;i++)
    {
       int x_cor= world[i][0];
       int y_cor= world[i][1];

       if(x_cor== intial_x&& y_cor == intial_y)
       {
           min_road=1;
       }
       else if(y_cor == intial_y){
        min_road++;
       }
    }
    int road=0;
    if(min_road<max_road)
    {
        road= min_road;
    }
    else
    {
        road= max_road;
    }
    std::cout<<road;
    #endif 

    return 0;
}