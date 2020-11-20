

#include <iostream>


int a = 100;
void text()
{
    int a = 10;
    std::cout << a << std::endl;//输出局部
    std::cout << ::a << std::endl;//输出全局
}



int main()
{
    text();
    return 0;
}

