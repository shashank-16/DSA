#include<bits/stdc++.h>
using namespace std;
//forward matching also a ways
int  beautify(string str)
{
    int vlae=0;
       
    int vl=0;
    int min=0;
   
  
    int size= str.length();
    string te= str;

    for(int i =1;i<size;i++)
    {
        int temp = str.at(i)-'0';
        
        switch(temp)
        {
            case 0:
                if(str.at(i-1)-'0' == 0)
                {
                    str.replace(i,1,"1");
                    vlae++;
                }
                else{

                }
             
          
            break;

            case 1:
           if(str.at(i-1)-'0'==1 )
           {
               str.replace(i,1,"0");
                vlae++;
           }
           else
           {
               
           }
            
            break;
        }
        
    }


    for(int i =size-1;i>0;i--)
   
    {
        int temp = te.at(i)-'0';
        
        switch(temp)
        {
            case 0:
                if(te.at(i-1)-'0' == 0)
                {
                    // name.replace(i,1,"1");
                    te.replace(i-1,1,"1");
                    
                    vl++;
                }
                else{

                }
             
          
            break;

            case 1:
           if(te.at(i-1)-'0'==1 )
           {
            //    name.replace(i,1,"0");
                    te.replace(i-1,1,"0");

                vl++;
           }
           else
           {
               
           }
            
            break;
        }
        
    }


    if(vl>vlae)
    {
        min = vlae;
    }
    else{
        min=vl;
    }

    std::cout<<vl <<vlae;
    return min;
}

int main()
{
    int n,m;
    std::cin>>n;
    
    while(n--)
    {
    string name ;
    std::cin>>name;
  int result = beautify(name);
    std::cout<<result;
    }


    return 0;
}