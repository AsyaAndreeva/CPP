#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int y;
    cin >> y;

    char result=0;

    if (x <= 16 && x >= 2 && y <= 100 && y >= 1)
    {
            int temp = y;
            int cnt=0;
            int base = x;
            char rem;
            while (temp > 0)
            {
                temp /= base; 
                cnt++;
            }
            char* remаinder = new char[cnt];
            temp = y;
            for (int i = cnt - 1; i >= 0; --i)
            {

                rem = char(temp % base);
                temp /= base;
                remаinder[i] = rem;
                
            }
            for (int i = 0; i < cnt; ++i) 
            {
                switch (remаinder[i])
                {
                case 'A': cout << remаinder[i]; break;
                case 'B': cout << remаinder[i]; break;
                case 'C': cout << remаinder[i]; break;
                case 'D': cout << remаinder[i]; break;
                case 'E': cout << remаinder[i]; break;
                case 'F': cout << remаinder[i]; break;
                default:cout << +remаinder[i]; break;

                }
                    

            }
    }
    else 
    {
        cout << "Invalid inpur data!";
    }


}