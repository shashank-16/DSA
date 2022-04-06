#include<iostream>
int main()
{
    #ifdef number_1 //same digit in number
    int n,count=0,num,x;
    std::cin>>n>>num;

    while(true)
    {
    x= n%10;
    n=n/10;

    if(x == num)count++;
    if(n==0)break;
    }
    std::cout<<count;
    #endif

    #ifdef number_2 //dec to binary
    int dec,n=0,bin=0,multi,b;
    bool stage =1;
    std::cout<<"number,existing,convert resp."<<std::endl;
    std::cin>>dec>>multi>>b;

    int storage = multi;

    while(dec>0)
    {
        bin=dec%b; //divide by converted number output the reminder
        dec=dec/b; 
        if(stage)
        {
        n = n+bin*1; // multiply with exisiting base
        stage=0;
        }
        else{
        n = n+bin*multi; // multiply with exisiting base
        multi *=storage;

        }

    }
    std::cout<<n;
    #endif

    #ifdef coding_block
    int n;
    int bin,result=0;
    int multi=10;
    bool stage =true;
    std::cin>>n;
    if(n==0)
    {
        n=5;
        std::cout<<n;
        exit(0);
    }
    while(n!=0)
    {
         bin = n%10;
         n=n/10;

        if(bin==0)
        {
            bin =5;   
        }
        if(stage)
        {
            result=result+bin*1;
            stage=0;
        }
        else{

        result=result+bin*multi;
        multi*=10;
        }

    }
    
    std::cout<<result;
    #endif

 


    return 0;
}