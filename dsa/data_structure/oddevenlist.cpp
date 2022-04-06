#include<iostream>
#include<list>

std::list<int>fold(std::list<int> array)
{
    using namespace std;
    list<int> folded;

    return folded ;
}
 
bool palidrone(std::list<int> array)
{
    using namespace std;
    list<int>::iterator front = array.begin();
    list<int>::iterator back= array.end();
    bool pali=false;
    bool first_time = false;
    int mid = array.size()/2;
    back--;

    while(mid+1)
    {
        if(*front == *back)
        {
            if(mid == mid-1)
            {
                first_time =true;
            }
            if(first_time)
            {
                pali =true;
            }
        }
        else{
            if(first_time)
            pali= false;
        }
        front++;
        back--;
        mid--;
    }

    return pali;
}

std::list<int> oddeven(std::list<int> array)
{
    std::list<int> odd;
    std::list<int> even;

    std::list<int> result;
    for(std::list<int>::iterator temp = array.begin();temp!=array.end();temp++)
    {
        if(*temp%2==0)
        {
            even.push_back(*temp);
        }
        else{
            odd.push_back(*temp);
        }
        
    }

    while(1)
    {
        for(std::list<int>::iterator temp = even.begin();temp!=even.end();temp++)
        {
            odd.push_back(*temp);
        }
        break;
    }
    return odd;
}

int main()
{
    using namespace std;
    int x;
    int value;
    std::cin>>x;
    list<int> array1;
    for(int i =0;i<x;i++)
    {
        std::cin>>value;
        array1.push_back(value);
    }
    // int front,back;;
    // std::cin>>front>>back;
    // list<int> result = oddeven(array1);
    bool result  = palidrone(array1);

    std::cout<<result;
    // for(int i : array1)
    // {
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;


    // for(int i : result)
    // {
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    // result.push_back(back);
    // result.push_front(front); 
    
    // for(int i : result)
    // {
    //     std::cout<<i<<" ";
    // }
    return 0;
}
