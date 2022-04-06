#ifdef binary_String
#include<iostream>
#include<math.h>
int main()
{
    int n;
    std::cin>>n;
    int array[n+1];
    array[0]=1;
    array[1]=2;

    for(int i=2;i<n+1;i++)
    {
        array[i]=array[i-2]+array[i-1]; 
    }
    std::cout<<array[n];
    return 0;

}

#endif

#ifdef building
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    std::cin>>n;
    int array[n+1];
    array[0]=1;
    array[1]=2;
    for(int i=2;i<n+1;i++)
    {
        array[i]=array[i-2]+array[i-1];
    }

    // int result=std::pow(array[n],array[n]);
    long int result=pow(array[n],2);

    std::cout<<result;


}

#endif