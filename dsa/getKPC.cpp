#include<bits/stdc++.h>

std::vector<std::string> kpc(std::string str);

std::string code[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz",};

std::vector<std::string> kpc (std::string str)
{
    if(str.size()==0)
    {
        std::vector<std::string> bres;
        bres.push_back(" ");
        return bres;
    }
    char temp=str.at(0);
    std::string ros= str.substr(1);

    std::vector<std::string> rros=kpc(ros);

    std::vector<std::string> mros;

    std::string codeforch=code[temp -'0'];

    // mros.insert(mros.end(),codeforch);
    

    for(int i = 0;i<codeforch.size();i++ )
    {
       char charcode=codeforch.at(i);

        for(std::string val :rros)
        {

         mros.insert(mros.end(),charcode+val);
        }

    }

    return mros;
}


int main()
{
    std::cout<<"0-> . ;"<<"1-> abc  "<<"2-> def "<<"3->  ghi  "<<"4->  jkl"<<"5-> mno"<<  " 6->  pqrs "<<"7->  tu  "<<"8->  vwx "<<"9-> yz";
    std::string name;
    std::cin>>name;
    std::vector<std::string> result=kpc(name);
std::cout<<"[";
    for(std::string te:result)
    {
        std::cout<<te<<",";
    }
std::cout<<"]";
return 0;
}



