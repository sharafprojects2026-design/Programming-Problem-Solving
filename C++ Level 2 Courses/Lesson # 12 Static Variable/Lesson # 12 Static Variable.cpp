#include <iostream>
using namespace std;
/* الفرق بين المتغير العادي والمتغيرالثابت
هو ان المتغير العادي في الفانكشن يتدمر بعد انتهاء وضيفةالفانكشن

اما المتغير  الثابت فهو يظل يحتفظ بالقيمة 
ولن يدمر المتغيرات الا بانتهاء البرنامج كاملا*/
void MyFunction()
{
     static int Number = 1;
    cout << "Value Of Number is: " << Number << endl;
    ++Number;
}

int main()
{
    MyFunction();
    MyFunction();
    MyFunction();
    
}

