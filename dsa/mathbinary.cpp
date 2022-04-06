#include<iostream>

int convert(int n,int b ) //base to decimal
{
    bool stage=true ;
    int mutli=b,bin=0,ni=0;
     while(n!=0)
    {
        bin=n%10; //divide by converted number output the reminder
        n=n/10; 
        if(stage)
        {
        ni = ni+bin*1; // multiply with exisiting base
        stage=0;
        }
        else{
        ni = ni+bin*mutli; // multiply with exisiting base
        mutli *=b;

        }
    }

    
    return ni;

}

int convert2(int n,int c ) //decimal to base
{
    bool stage=true ;
    int mutli=10,bin=0,ni=0;
     while(n!=0)
    {
        bin=n%c; //divide by converted number output the reminder
        n=n/c; 
        if(stage)
        {
        ni = ni+bin*1; // multiply with exisiting base
        stage=0;
        }
        else{
        ni = ni+bin*mutli; // multiply with exisiting base
        mutli *=10;

        }
    }

    
    return ni;

}
int main()
{
    int n,b,add;
    std::cin>>b>>n>>add;

    int result = convert(n,b);
    int result1  =convert(add,b);
    result-=result1;
    // std::cout<<result;

    int res=convert2(result,b);
    std::cout<<res;

    return 0;
}

