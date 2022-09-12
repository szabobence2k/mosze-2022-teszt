#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //identifier "NELEMENTS" is undefined
    std::cout << '1-100 ertekek duplazasa' // too many characters in character constant
    for (int i = 0;) //expected a ';'
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //expected a ';'
    {
        atlag += b[i]
    } //expected a ';'
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
