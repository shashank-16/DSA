#ifdef sieve
#include<iostream>
int main()
{
    int k;
    std::cin>>k;
    while(k--)
    {

    
     int n,i;
     
     std::cin>>n;
     int count=0,num=1;

    while (count < n)  
    {  
    num=num+1;  
    for ( i = 2; i <= num; i++)  
    {   

        if (num % i == 0)   
        {  

        break;  
        }  
    }  
    if (i == num)  
        {  

        count = count+1;  
        }  
      
    //prints the nth prime number  
    }  
    std::cout<<num<<std::endl;  
    }
    return 0;

}

#endif

#ifdef Simple_input
#include<iostream>
int main()
{
  int i,j,n=2000,sum=0;
    int array[n];
 
    for(i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
    for (i = 0; i < n; i++)
    {
        sum=array[i-1]+array[i];
        if (sum>0)
        {
          std::cout<<array[i]<<std::endl;
        }
        else
        {
            break;
        }
    }
}
#endif