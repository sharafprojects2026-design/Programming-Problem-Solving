#include <iostream>
using namespace std;

/* هذا الدرس هو تعريف المتغير اوتوماتيكيا
وهذه خاصية تدعمها السي بلس بلس
لكن لاينصح باستخدامه لانك كمبرمج
يلزمك تكون واعي كم احتياجك في الذاكرة لتخزين اي متغير */
int main()
{
    auto X = 10; //Type Integer
    auto Y = 12.5; //Type Double
    auto Z = "Sharf Abdulatef";// Type String

    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;
    return 0;
    
}

