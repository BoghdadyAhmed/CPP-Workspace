#include <iostream>
using namespace std;
void fun(int n)
{


cout<<"\n********************************"<<endl;

}
int main()
{


void(*fun_ptr)(int)=&fun;
fun_ptr(0);

fun(1);





    return 0;
}