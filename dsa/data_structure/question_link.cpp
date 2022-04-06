#include<list>
#include<iostream> 

std::list<int> merge(std::list<int> *array1,std::list<int> *array2)
{
    std::list<int> merged;
    std::list<int>::iterator temp=array1->begin();
    std::list<int>::iterator temp1 =array2->begin();
    
    int i=0,j=0;

    int length=array1->size();
    int length1 =array2->size();
    while(i<length && j<length1)
    {
        if(*temp > *temp1)
        {
            merged.push_back(*temp1);
            temp1++;
            j++;
        }else{
            merged.push_back(*temp);
            temp++;
            i++;
        }
    }

        while(i<length)
        {
            merged.push_back(*temp);
            temp++;
            i++;
        }
        while(j<length1)
        {
            merged.push_back(*temp1);
            temp1++;
            j++;
        }

       
    
    return merged;

}


int main()
{
    std::list<int> array1;
    std::list<int> array2;

    int x,y;
    int value;

    std::cin>>x>>y;

    for(int i=0;i<x;i++)
    {
        std::cin>>value;
        array1.push_back(value);
    }
    value =0;
    for(int i=0;i<y;i++)
    {
        std::cin>>value;
        array2.push_back(value);
    }
    std::list<int>sorted =  merge(&array1,&array2);
    for(std::list<int>::iterator temp = sorted.begin(); temp!=sorted.end();temp++)
    {
        std::cout<<*temp<<" ";
    }
    return 0;
}