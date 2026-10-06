#include <iostream>
using namespace std;

int ReadNumber()
{
    long long Number; 
    cout << "Please enter a Number? " << endl;
    cin >> Number;
    return Number; 
}
string NumberToText( long long Number)
{
    
    if (Number == 0)
    {
        return "";
    }
    if (Number >= 1 && Number <= 19)
    {
        string arr[] = {
   "", "one", "two", "three", "four", "five",
   "six", "seven", "eight", "nine", "ten",
   "eleven", "twelve", "thirteen", "fourteen",
   "fifteen", "sixteen", "seventeen", "eighteen",
   "nineteen" };
        return arr[Number] + " ";
    }
    if (Number >= 20 && Number <= 99)
    {
        string arr[] = {
   "", "", "twenty", "thirty", "forty",
   "fifty", "sixty", "seventy", "eighty",
   "ninety" };
        return arr[Number / 10] + " " + NumberToText(Number % 10);
    }
    if (Number >= 100 && Number <= 199)
    {
        return "one Hundred " + NumberToText(Number % 100);
    }
    if (Number >= 200 && Number <= 999)
    {
        return NumberToText(Number / 100) + " Hundred " + NumberToText(Number % 100);
    }
    if (Number >= 1000 && Number <= 1999)
    {
        return " one Thousand " + NumberToText(Number % 1000);
    }
    if (Number >= 2000 && Number <= 999999)
    {
        return NumberToText(Number / 1000) + "Thousand " + NumberToText(Number % 1000);
    }
    if (Number >= 1000000 && Number <= 1999999)
    {
        return "one million " + NumberToText(Number % 1000000);
    }
    if (Number >= 2000000 && Number <= 999999999)
    {
        return NumberToText(Number / 1000000) + "Million " + NumberToText(Number % 1000000);
    }
    if (Number >= 1000000000 && Number <= 1999999999)
    {
        return "one Billion " + NumberToText(Number % 1000000000);
    }
    else
    {
        return NumberToText(Number / 1000000000) + "Billion " + NumberToText(Number % 1000000000);
    }

}


int main()
{
    
    long long Number = ReadNumber();
    cout << endl;
    cout << NumberToText(Number);
    cout << endl;
    return 0;
    
}

