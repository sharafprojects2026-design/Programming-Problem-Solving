#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    float PI = 3.14159265;
    printf("Precision specification of %.*f\n", 1, PI);
    printf("Precision specification of %.*f\n", 2, PI);
    printf("Precision specification of %.*f\n", 3, PI);
    printf("Precision specification of %.*f\n",7, PI);
    float x = 7.0, y = 9.0;
    printf("The float Division is: %.3f / %.3f = %.3f \n", x, y, x / y);
    printf("The Float Division is %.4f \n", x);

    float  A = 4.55, B= 4.5;
    printf("Addision %.2f / %.2f = %.2f \n ", A, B, A + B);
    printf("Sub %.2f / %.2f = %.2f \n",A , B, A / B);
    


    
}

