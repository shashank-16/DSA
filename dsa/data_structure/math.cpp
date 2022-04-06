#include<iostream>

class test{
    public :
    int a;
    test(int a)
    {
        this->a = a;
    }
    void print()
    {
        std::cout<<a<<std::endl;
    }
};

int main()
{

// char a='4';
// char b ='1';
// int val=a-'0';
// int val1=b-'0';
// char result='0';
// val = val * val1;
// std::cout<<val<<" ";
// val=abs(val);
// // result = static_cast<char> (val);
// std::cout<<result;

// test a(1);
// test b(12);
// test c(2);
test *a = new test(1);
test *b = new test(12);
test *c = new test(2);

c=b;

// c->a=13;

a->print();
b->print();
c->print();

return 0;
}