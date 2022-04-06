#include<iostream>
#include<string>
#include<vector>

using namespace std;
 
vector<string> subs(string str)
{
    if(str.size() == 0)
    {
        vector<string>  bres;
        bres.insert(bres.begin(),"");
        return bres;

    }
    char temp= str.at(0);

    string ch;
    ch+=temp;

    string ros=str.substr(1);
    vector<string> rros =subs(ros);
    vector<string> mros;

    for(string rts : rros)
    {
        mros.insert(mros.end(),""+rts);
        mros.insert(mros.end(),ch + rts);
    }

    // for(char rts : ros)
    // {
    //     mros.insert(mros.end(),rts);
    //     // mros.insert(mros.end(),ch + rts);
    // }
    
    return mros;
} 

int main()
{
    std::string name;
    std::cin>>name;

   vector<string> result = subs(name);
std::cout<<"[";
int i=0;
   for(string re:result)
   {   i++;
       std::cout<<re;
    if(i<result.size())
    {

       std::cout<<", ";
    }
   }
   std::cout<<'\x8';
std::cout<<"]";
    return 0;

    
}