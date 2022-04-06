#include<iostream>
int main()
{
    int m,n;
    std::cin>>n>>m;
    int array[n+1];
    array[0]=0;
    for(int i=1;i<n+1;i++)
    {
        if(i<=m)
        {
            array[i]=1;
            if(i == m)
            {
                array[i]=2;
            }
        }
        else{
            array[i]=array[i-1]+array[i-m];

        }
    }
    auto print=[](auto value){
        std::cout<<value;
    };

    int result=array[n];
    print(result);

    return 0;
}