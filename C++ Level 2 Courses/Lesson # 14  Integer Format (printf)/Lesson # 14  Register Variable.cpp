#include <iostream>
using namespace std;


int main()
{
    //Print Integer And String Variable
    int Page = 1, TotalPages = 10; 
    printf("The Page Number= %d \n", Page);
    printf("you Are in Page %d Of %d \n", Page, TotalPages);

    //Width Specification 
    printf("The Page Number =%0*d \n",2, Page);
    printf("The Page Number = %0*d \n ", 3, Page);
    printf("The Page Number = %0*d \n", 4, Page);
    printf("The Page Number = %0*d \n", 5, Page);

    int Number1 = 20, Number2 = 30;
    printf("The Result Of %d + %d = %d \n", Number1, Number2, Number1 + Number2);
    
}
