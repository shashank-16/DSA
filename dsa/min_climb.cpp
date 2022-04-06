#include<iostream>

void  climb_min(int array[],int n)
{
    int temp[n+1];
    temp[n]=0;
    for(int i=0;i<n;i++)
    {
        temp[i]=0;

    }

int steps=0;
int min=temp[n];
    for(int i=n-1;i>=0;i--)
    {
        steps=array[i];

        if(steps!=0)
        {
            for(int j=steps;j>0;j--)
            {
                if(i+j<n)
                {
                    
                    temp[i] = temp[i+j];
                    
                    if(min>temp[i])
                    {
                    temp[i] += temp[i+j];
                    min =temp[i];
                                          }
                    else{

                        temp[i]++;
                    }

                }
                 if(i+j == n)
                {
                    temp[i]=1;
                    break;
                }
            }
        }else{
            temp[i]=0;
        }
        // min=temp[i];

    }
     for(int i=0;i<=n;i++)
    {
        std::cout<<temp[i]<<"  ";

    }
    // return temp[0];

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
    // int result=climb_min(array,n);
    climb_min(array,n);
    // std::cout<< result;

    return 0;

}