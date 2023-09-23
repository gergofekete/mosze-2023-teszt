#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // _ pótlása
    std::cout << "1-100 ertekek duplazasa" << std::endl; //"" a '' helyett + std::endl + pontos vessző pótlása
    for (int i = 0; i < N_ELEMENTS; i++) //i < N_ELEMENTS pótlása
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // < N_ELEMENTS
    {
        std::cout << "Ertek:" << std:endl; // std::endl
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // atlag = 0
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
