#ifdef trans

#include<iostream> 
int main()
{
    int n,m;
    std::cin>>n;
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>array[i][j];
        }
    }
int j=0;
while(j<n)
{
    for(int i=n-1;i>=0;i--)
        {
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<std::endl;
j++;
}

return 0;
}
#endif 

#ifdef search
#include<iostream> 
int main()
{
    int n,m;
    std::cin>>n;
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>array[i][j];
        }
    }

    std::cin>>m;
   int i=0;
   int j=n-1;
    bool found=false;
    while(i<n && j>=0)
    {
        if(array[i][j]==m)
        {
            std::cout<<i<<std::endl<<j;
            found =1;
            break;
        }


        if(m<array[i][j])
        {
            j--;
        }
        else{
            i++;
        }
    }
    
    if(!found)
    {
        std::cout<<"Not Found";
    }
    return 0;
}



// int i=0;j=0;

// while(i++)
// if(data<=4*i)
// {

//     if(array[i][j]>data)
//         {

//         }
//     else{

//     }
//     i++;
// }
// else{
//     i++;

// }


#endif
