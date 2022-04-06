#ifdef inverse
#include<iostream>

int main()
{

    int n,temp=0;
std::cin>>n;
int array[n];
int inverse[n];

for(int i=0;i<n;i++)
{
    std::cin>>array[i];
}

for(int i=0;i<n;++i,temp=0)
{
     temp=array[i];
    inverse[temp]=i;
    // std::cout<<"vaule at"<<inverse[temp]<<std::endl;

}

for(int i=0;i<n;i++)
{
    std::cout<<inverse[i];
}
return 0;
}

#endif 

#ifdef subarray

#include<iostream>
int main()
{
int n,temp=0;
int j=0;
std::cin>>n;
int array[n];

int count=1;
for(int i=0;i<n;i++)
{
    std::cin>>array[i];
}
temp=n;
int store=temp;

for(int i=0;i<n;i++)
{
    while(temp--)
    {
    for(int j=i;j<count;j++)
    {
        std::cout<<array[j]<<" ";
    }
    count++;
    std::cout<<std::endl;
    }
    count=i+2;
    store--;
    temp=store;

}
return 0;
}

#endif