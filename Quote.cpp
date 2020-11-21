#include <iostream>
using namespace std;

void text1()
{
    int a = 10;
    //引用一旦初始化之后不能改变引用的标识
    int& b = a;
    b = 100;
    cout << a << endl;
    int c = 1;
    //b = c ;代表把c值赋值给b，不是给c取别名为b
    // int &a; 引用定义是必须初始化

}

void text2()
{
    int a[5] = {1,2,3,4,5};
    //int (&arr)[5] = a;
    typedef int ARR[5];
    //type & 别名 = 旧名
    ARR& arr = a;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}

//形参是引用
void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
void text3()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << a << " " << b << endl;
}


void swap_ref(int &x,int &y)//int &x = a,int &y = b
{
    int tmp = x;
    x = y;
    y = tmp;
}
void text3_ref()
{
    int a = 10;
    int b = 20;
    swap_ref(a,b);
    cout << a << " " << b << endl;
}
//形参是指针引用
void get_mem(int **q)
{
    *q = (int*)malloc(5 * sizeof(int));
}
void get_mem_ref(int*& q)//int * (&q) = p
{
    q = (int*)malloc(5 * sizeof(int));
}
void text4()
{
    int* p = NULL;
    get_mem(&p);
    get_mem_ref(p);
}

// int &t = a
int text5()
{
    //能不能返回一个变量的引用，看这个变量的空间是否被释放了
    static int b = 100;
    int a = 10;  
    //return a;//err 不能返回局部变量的引用
    return b;//可以返回静态的变量的引用
}
int main()
{
    //text3_ref();
    text5();
    return 0;
}







