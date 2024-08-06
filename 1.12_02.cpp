#include <iostream>
#include <fstream>
#include <string>

int main()
{
    setlocale(LC_ALL, "rus");
    std::ifstream fin("in.txt");
    if (!fin.is_open())
    {
        std::cout << "Файл не открыт" << std::endl;
        return 1;
    }

    int number;
    fin >> number;

    int* array = new int[number];

    for (int i = 0; i < number; ++i)
    {
        fin >> array[i];
    }

    fin.close();

    for (int i = number - 1; i >= 0; --i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array;

    return 0;
}