#include<iostream>
int main()
{
    int n,x;
    bool f=true,l=true;
    std::cin>>n>>x;

    int array[n];

    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }

    int first=0,last=n;
    // for(int i=0;i<n;i++)
    // {
    //     if(x==array[i])
    //     {
    //         if(f==true)
    //         {
    //         first = i;
    //         f=false;

    //         }
    //         if((x+1)!=array[i])
    //         {
    //             last =i;
    //         }
    //     }
        
    // }        
    // std::cout<<first<<std::endl<<last;
    while(first<last)
    {
        int mid=(first+last)/2;
        if(x==array[mid])
        {
            if(f)
            {
            std::cout<<mid<<std::endl;
            f=false;
            }
           first=mid+1;
           std::cout<<"postion of mid pointer"<<mid<<std::endl;
           if(array[mid-1]!=x)
           {
            last =mid;
            std::cout<<last;
            break;

           }
        }

        if(x>array[mid])
        {
            first=mid;
        }
        if(x<array[mid])
        {
            last=mid;
        }
    }
    // std::cout<<count;
    return 0;

    
}