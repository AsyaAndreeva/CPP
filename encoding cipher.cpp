#include <iostream>
#include<cmath>
#include<string>
using namespace std;

void KodiraneWithSteps(string VhodenNiz, int steps);

int main()
{
    string VhodenNiz="THIS IS ONE TEST STRING!";
    int steps = 2;

    KodiraneWithSteps(VhodenNiz, steps);
}
void KodiraneWithSteps(string VhodenNiz, int steps)
{
    int lenght = VhodenNiz.length();
    char* KodiranNiz = new char[lenght];
    string VhodeNizCopy = VhodenNiz;
    string result;

    if (steps <= 10 && steps >= 1) {
        for (int i = 0; i < lenght; i++)
        {
            if (VhodenNiz[i] >= 'A' && VhodenNiz[i] <= 'Z')
            {
               
                KodiranNiz[i] = tolower((char)((int)VhodenNiz[i] - steps));
            }
            else if (VhodenNiz[i] >= 'a' && VhodenNiz[i] <= 'z')
            {
                KodiranNiz[i] = VhodeNizCopy[i];
            }
           else 
            {
                KodiranNiz[i] = 95;
            }
        }
    
}
    
    for (int i = 0; i < lenght; i++)
    {
        cout << KodiranNiz[i];
    }
}