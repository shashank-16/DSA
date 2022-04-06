#ifdef display
#include<iostream>

static int mini=0;


void  print_a(int array [],int x)
{
    static  signed int n=0;
    mini=array[0];
    if(n==x)
    {
        return ;

    }
    if(array[n]<mini)
    {
        mini =array[n];
    }

    std::cout<<mini;
    n++;
    return print_a(array,x);
}



int main()
{
    int n;
    std::cin>>n;
   int array[n];
   for(int i =0;i<n;i++)
   {
       std::cin>>array[i];
   }
//    int *ptr=&array[0];
   print_a(array,n);
// std::cout<<*ptr;
using namespace std;
// cout<<mini;s

   return 0;

}
#endif

#ifdef searching
#include<iostream>
 int holder[1000];


int searching1(int array[],int n,int &data){
    static int i =0;
    static int  index =0;
    // static int hold =0;
    if(i==n)
    {
        return index;
    }
    // if(i==n && hold !=0)
    // {
    //     return hold;
    // }
// if(i==n && hold ==0)
//   {
//       return -1;
//   }  

    if(array[i]==data)
    {
        
        // hold=i;
        holder[index]=i;
        index++;

    }
    i++;

    return searching1(array,n,data);
}

int main(){
    int n;
    int x;
    std::cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];

    }

std::cin>>x;
    int ind= searching1(array,n,x);
   if(ind!=0)
   {

    for(int i=0;i<ind;i++)
        {
            std::cout<<holder[i]<<std::endl;

        }
   }
   else{
    

   }
}
#endif