#include <iostream>
#include "Point.h"
#include <vector>
#include <string>
#include <fstream>

template <class T>
T* Find(T* arr, int size, const T& obj)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == obj)//אנו זקוקים לאופרטוק == על מנת שנוכל להשוות בין אובייקטים
        {
            return &arr[i];
        }
    }
    return NULL;
}
template <class T>
void Add(std::vector<T>& arr, const T& obj)
{
    arr.push_back(obj);
}
std::vector<Point>* ReadFromFile(std::string name)
{
    std::vector<Point>* arr = new std::vector<Point>();
    std::ifstream  in(name, std::ios::in);
    if (!in) std::cout << "Error";
    std::string line;
    in.seekg(0, std::ios::beg);
    while (std::getline(in, line))
    {
        int x=0, y=0;
        int counter = 0;
        while (line[counter] != ' ')
        {
            counter++;
        }
        counter++;
        while (line[counter] != ',')
        {
            x *= 10;
            x += line[counter]-'0';
            counter++;
        }
        counter += 5;
        while (line[counter] != ';')
        {
            y *= 10;
            y += line[counter]-'0';
            counter++;
        }
        Point temp(x, y);
        arr->push_back(temp);
    }
    return arr;
}
template <class T>
void WriteToFile(std::vector<T>* vec, std::string name)
{
    std::ofstream out(name, std::ios::trunc);
    for (T value: *vec)
    {
        out << value;//אנו זקוקים לאופרטור הדפסה על מנת להכניס לקובץ את ערך האובייקטים
        out << "\n";
    }
    out.close();
}

int main()
{
    /*Point p1(3, 6);
    Point p2(1, 6);
    Point p3(2, 6);
    Point p4(20, 6);*/
    int arr[3] = { 2, 5, 3 };

    int* found = Find<int>(arr, 3, 8);
    if (found != NULL) {
        std::cout << "Found\n";
    }
    else {
        std::cout << "Not found\n";
    }
    std::vector<int> myArray = { 1, 2, 3 };

    Add<int>(myArray, 5);
    std::cout << myArray[3];
    std::vector<Point>* newOne = ReadFromFile("tx.txt");
    for (Point value : *newOne) {
        std::cout << "x: " << value.GetX() << ", y: " << value.GetY() << "\n";
    }
    WriteToFile<int>(&myArray, "data.txt");

}
