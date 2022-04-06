#include<iostream>
#include<stack>
#include<string>

int prece(char oper)
{
    if(oper == '+')
    {
        return 1;
    }
    else if(oper == '-')
    {
        return 1;
    }
    else if(oper == '*')
    {
        return 2;
    } 
    else if(oper == '/'){
        return 2;
    }
    else{

    }
    return 0;
}


char opertion(int value1,int value2,char symbol)
{
    int result=0;
    switch (symbol)
    {
    case '+':
    result=value1+value2;
    break;

    case '-':
    result=value1-value2;
    
    break;

    case '*':
    result=value1*value2;
    
    break;

    case '/':
    result=value1/value2;
    break;
    

    default:
    result=0;
        break;
    }
    result =abs(result);
    // std::cout<<value1 << symbol<< value2 <<"="<< result<<std::endl;
    return result;

}
int main()
{
    auto mesaage =[](){
        std::cout<<"hello world";
    }; // lamdas expression
    std::string exp;
    std::cin>>exp;

    std::stack<int> vari;
    std::stack<char> opera;
    char symbol;
    for(int i =0;i<exp.length();i++)
    {
        char symbol=exp.at(i);
        if(symbol == '+'|| symbol == '-'||symbol == '*'||symbol == '/' )
        {
            if(opera.size()>0)
            {
                // std::cout<<"symbol is -> "<<symbol << "symbol at top stack" << opera.top()<<std::endl;
                char current=opera.top();
                if(prece(symbol) > prece(current))
                {
                    opera.push(symbol);
                //  std::cout<< "symbol at top stack from precedence side " << opera.top()<<std::endl;
                
                }
                else if(prece(symbol)<= prece(opera.top())){
                    int value2 = vari.top();
                    vari.pop();
                    int value1=vari.top();
                    vari.pop();
                    int result=opertion(value1,value2,opera.top()); // try to use the on time function instead of the variable beasue it some time suck
                    opera.pop();

                    vari.push(result);
                    
                    while(opera.size() > 0 && prece(symbol) == prece(opera.top())) //till operator have same precendence
                    {
                       
                        int value4 = vari.top();
                        vari.pop();
                        int value3=vari.top();
                        vari.pop();
                        int result=opertion(value3,value4,opera.top());
                        opera.pop();

                        vari.push(result);
                    }
                    opera.push(symbol);
                    //  std::cout<< "symbol at top stack" << opera.top()<<std::endl;
                }
                else{
                    opera.push(symbol);
                //  std::cout<< "symbol at top stack else side " << opera.top()<<std::endl;

                }
            }else{
                opera.push(symbol);
            }
        }
        else{
            //number stack
            int value=symbol-'0';
            vari.push(value);
        }
    }
    while(opera.size() != 0)
    {
        int value2 = vari.top();
        vari.pop();
        int value1=vari.top();
        vari.pop();
        int  result=opertion(value1,value2,opera.top());
        opera.pop();

        vari.push(result);
    }
    //last time process
    int result=vari.top();
    std::cout<<result;
    return 0;
}

