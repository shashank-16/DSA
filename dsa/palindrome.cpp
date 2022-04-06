#include<iostream>
#include<string>
int main()
{
    // char* string="abcc";
    // char **p=&string;
    // int total=4;
    // int count=0;
    // int counter = 0;
    // while(count<=total)
    // {
    //     while(counter<count)
    //     {
    //         std::cout<<**p<<std::endl;
    //         *p+=1;
    //         counter++;
    //         if(counter== count-1)
    //         {
    //             p=&string;
    //         }
    //     }
    //     count++;

    // }
    // std::cout<<"he "<<*p;
    std::string name="abcc";
    auto n= name.begin();
    int counter =0;
    int total=name.length();
    int count =1;
    int al=0;

    while(al<total)
    {

    
        while(counter<count && al!= total-1)
        {
            std::cout<<*n;
            counter++;
            n++;
            if(counter==count && count<total && n!=name.end())
            {
                n=name.begin()+al;
                counter =al;
                count++;
                std::cout<<std::endl;
            }

        }
        counter=al;
        counter--;
        al++;
        count=al;

    }
    


}
