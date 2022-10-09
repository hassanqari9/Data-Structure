#include <iostream>
using namespace std;
int total = 0;

int LenStr(char *str)
{
    if(*str == NULL)
       return total;
    else {
        total++;
        return LenStr(++str);
    }
}

int main() {
    
    int count = 0;
    char str[100];
    
    cout << "Enter Your String ";
    cin >> str;
    
    count = LenStr(str);
    cout << count;

      
    return 0;
}