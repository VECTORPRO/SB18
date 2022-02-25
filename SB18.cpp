#include <iostream>

class Stack
{
private:
    int* arr;
    int size;
public:
    Stack()
    {
        SetArraySize();
        MakeArray(arr);
    }

    void SetArraySize()
    {
        std::cout << "Enter the size at array: " << "\n";
        std::cin >> size;
    }

    void MakeArray(int*& array)
    {
        array = new int[size];
    }

    void print()
    {
        std::cout << "Array: ";
        for (int i = 0; i < size; i++)
        {
            std::cout << *(arr + i) << ' ';
        }
        std::cout << '\n';
    }

    int* CopyArray()
    {
        int* newArray;
        MakeArray(newArray);
        for (int i = 0; i < size - 1; i++)
        {
            *(newArray - i) = *(arr + i);
        }
        return newArray;
    }

    int pop()
    {
        int responce = *arr;
        size--;
        arr++;
        return responce;
    }

    void push(int a)
    {
        size++;
        int* newArr = CopyArray();
        *(newArr + size) = a;
        deleteArray();
        arr = newArr;
    }
    void deleteArray()
    {
        delete[] arr;
    }
};

int main()
{
    Stack* p = new Stack(); 
    void SetArraySize();
    void MakeArray(int*& array);
    void print();
    int* CopyArray();
    int pop();
    void push(int a);
    void deleteArray();
};