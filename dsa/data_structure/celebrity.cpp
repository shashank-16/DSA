#include<iostream>
#include<stack>
#ifdef cele
int main()
{
    int n;
    std::cin>>n;
    int world[n][n];
    std::stack<int> mcq;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>world[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        mcq.push(i);
    }

    while(mcq.size()!=1)
    {
        // std::cout<<"porcess"<<std::endl;
        int val1=mcq.top();
        mcq.pop();
        int val = mcq.top();
        mcq.pop();
        if(world[val][val1] != 0)
        {
            // std::cout<<"array"<<val <<"  " <<val1 <<world[val][val1] ;
            mcq.push(val1);
            // std::cout<<"can be cele  "<<val1<<std::endl;
        }
        else if(world[val][val1] == 0){
            // std::cout<<"array"<<val <<"  " <<val1 <<world[val][val1] ;
            mcq.push(val);
            // std::cout<<"can be cele  "<<val<<std::endl;
           
        }
        else{

        }

    }
    bool cel=false ;
    for(int i =0;i<n;i++)
    {
        if(world[mcq.top()][i] == 0)
        {
            cel=true;
        }
        else if(mcq.top() == i)
        {

        }
        else{
            cel=false;
            break;
        }
    }

    for(int i =0;i<n;i++)
    {
        if(world[i][mcq.top()] == 1)
        {
            cel=true;
        }
        else if(mcq.top() == i)
        {

        }
            else{
            cel=false;
            break;
        }
    }
    if(cel)
    {
        std::cout<<mcq.top();
    }
    else{
        std::cout<<"none";
    }
// std::cout<<mcq.top();
return 0;
}
#endif

#ifdef small_patterm
int main()
{
    std::stack<int> sets;
    std::string patt;
    std::cin>>patt;
    int count=1;
    for(int i=0;i<patt.length();i++)
    {
        char letter=patt.at(i);
        if(letter == 'd')
        {
            sets.push(count);
            count++;
        }
        else if(letter == 'i')
        {
            sets.push(count);
            while(sets.size()> 0)
            {
                std::cout<<sets.top();
                sets.pop();
            }
            count++;
        }
        else{

        }
    }
    sets.push(count);

    while(sets.size()> 0)
    {
        std::cout<<sets.top();
        sets.pop();
    }
    return 0;
}
#endif
