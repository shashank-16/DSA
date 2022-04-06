#ifdef combination

//combination 
#include<iostream>

bool finds(int array[],int value,int n)
{
    for(int i=0;i<n;i++)
    {
        if(value==array[i])
        {
            return true;
        }
    }
    return false;

}
int main()
{
    int n;
    std::cin>>n;

    int array[n];    
    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
    int charge,count=0;
    std::cin>>charge;
    int result[charge+1];
    for(int i=0;i<charge+1;i++)
    {
        result[i]=0;
    }

    for(int i=0;i<n;i++){
        int value=array[i];
        for(int j=0;j<charge+1;j++)
        {
            // std::cout<<"process"<<value;
            if(j==0)
            {
                result[j]=1;
            }
            else if(value<=j)
            {
                if(value == j)
                {
                    result[j]++;
                }
                if (value<j)
                {
                    int ros=j-value;
                    if(result[ros]!=0)
                    {
                        result[j]+=result[ros];
                    }
                }

            }
        }

    }
    for(int i=0;i<charge+1;i++)
    {
        std::cout<<result[i]<<" ";
    }
// std::cout<<result[charge];

    return 0;



#endif

#ifdef permuation

#include<iostream>

int main()
{
    int n;
    std::cin>>n;

    int array[n];    
    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
    int charge,count=0;
    std::cin>>charge;
    int result[charge+1];

    for(int i=0;i<charge+1;i++)
    {
        result[i]=0;
    }

    for(int j=0;j<charge+1;j++)
    {
        // result[j]++;
        for(int i=0;i<n;i++)
        {
            int value=array[i];
            if(j==0)
            {
                result[j]=1;
            }
            if(j-value >=0){

                result[j]+=result[j-value];
            }
        }
    }

    //  for(int i=0;i<charge+1;i++)
    // {
    //      std::cout<<result[i]<<" ";

    // }
    std::cout<<result[charge];

return 0;

}
#endif