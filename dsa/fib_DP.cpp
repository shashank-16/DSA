#ifdef fib

#include<iostream>

int fib(int n,int array[])
{
    if(array[n]!=0)
    {
        return array[n];
    }

    if(n==0) return 0;
    if( n==1 )
    {
        return 1;
    }

    int result = fib(n-1,array)+fib(n-2,array);
   array[n]=result;

    return result; 
}


int main()
{
    int n;
    std::cin>>n;
    int array[n+1];
    array[0]=0;
    for(int i =1;i<=n;i++)
    {
        array[i]=0;

    }

    int result=fib(n,array);
    std::cout<<result;
    return 0;

}
#endif

#ifdef climb_stair
#include<iostream>

//siimple recursion
int climb(int n,int array[])
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    if(array[n]!=0)
    {
        return array[n];
    }

    int result=climb(n-1,array)+climb(n-2,array)+climb(n-3,array);
   
    array[n]=result;

    return result;


}

int from_tabul(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }

    int array[n];
    array[0]=1; //*(array+row)=1 ;
    
    for(int i=1;i<=n;i++)
    {
        array[i]=array[i-1];
        
         if(i>=2)
        {
            array[i]+=array[i-2];

        }
         if(i>=3)
        {
            array[i]+=array[i-3];
        }
    }
    return array[n];

}

int main()
{
    int n;
    std::cin>>n;
    int array[n];
    // int result= climb(n,array);
    int result=from_tabul(n);

    std::cout<<result;
    return 0;

}

#endif

#ifdef with

#include<iostream>

 int number_of_step(int array[],int n,int position)
{   
    int temp[n+1];
    for(int i=0;i<=n;i++)
    {
        temp[i]=0;
    }

    temp[n]=1;
    int steps;

    for(int i =n-1 ; i>=0;i--)
    {
        steps = array[i]; //1 
        if(steps!=0)
        {
            for(int j= 1;j<=steps;j++)
            {
                if(i+j <=n)
                {
                    temp[i]+=temp[i+j];

                }

            }

        }
        else{
        temp[i]=steps;
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     std::cout<<temp[i];
    // }
    // std::cout<<std::endl;
     return temp[position];
}

int main()
{
    int n,position;
    std::cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];

    }
    // std::cin>>position;
    int result=number_of_step(array,n,0);
    std::cout<<result;
    return 0;
}

#endif

// 10
// 3
// 3
// 0
// 2
// 1
// 2
// 4
// 2
// 0
// 0