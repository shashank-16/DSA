#ifdef incdec
#include<iostream>

void printInc(int x,int n)
{
    if(x==n+1)
    {
        return;
    }
    if(x!=0)
    {
        std::cout<<x<<std::endl;

    }
    return printInc(x+1,n);
}
void printIncDec(int n,int x){
   if(n==0)
   {
       return  printInc(n,x);
   }
    std::cout<<n<<std::endl;

   
   return printIncDec(n-1,x);
    
}


int main(){
    int n; std::cin>>n;
    printIncDec(n,n);
}
#endif

#ifdef factorial
#include<iostream>
int fact(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    std::cin>>n;
    int result= fact(n);
    std::cout<< result;


}
#endif 

#ifdef power_liner
#include<iostream>
long int poweri(long int n,long int x)
{
    if(x==0)
    {
        return 1;
    }
    return n*poweri(n,x-1);
}
int main()
{
   long int i;long int x;
    std::cin>>i>>x;
    long result=poweri(i,x);
    std::cout<<result;

}   

#endif

#ifdef zig-zag
 #include<iostream>

void print1(int x)
{
    if(x==0)
    {
        return ;

    }
    std::cout<<x;
    print1(x-1);
    std::cout<<x;
    print1(x-1);
    std::cout<<x;
}

int main()
{
    int x;
    std::cin>>x;
    
    print1(x);
    return 0;


}

#endif