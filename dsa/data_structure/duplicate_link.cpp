#include<iostream>
#include<list>

std::list<int> duplicate(std::list<int> array)
{
    
    std::list<int> result;

     for(std::list<int>::iterator temp = array.begin(); temp!=array.end();temp++)
    {
        
    }
    return result; 
}
int main()
{
    std::list<int> array;
    int n;
    int value;

    std::cin>>n;

    for(int i =0;i<n;i++)
    {
        std::cin>> value;
        array.push_back(value);
    }
    std::list<int> removed = duplicate(array);

    for(std::list<int>::iterator temp = removed.begin(); temp!=removed.end();temp++)
    {
        std::cout<<*temp<<" ";
    }

    return 0;

}