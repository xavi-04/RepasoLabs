#include <iostream>
using namespace std;

bool hasLetter(char letter, char* array1, char* array2, int sizeArray);
void printArray(char* array, int sizeArray);
bool compareArray(char* array1, char* array2, int sizeArray);

int main(void)
{
    int size = 0;
    char* word;
    char* aux;
char saveLetter;


cout << "Tamaño de la palabra "; cin >> size;

word = new char[size];
aux = new char[size];

cout << "Digite la palabra ";

    for(int i = 0; i < size; i++)
    {
        cin >> saveLetter;
        word[i] = saveLetter;
    }

    for(int i = 0; i < size; i++){
        aux[i] = '_';
    }

    char letter;
    int a = size + 3;

    cout << "La palabra contiene " << size << "letras" << endl;
    do
    {
        cout << "Turnos restantes:\t" << a << " \nDigite una letra: "; cin >> letter;



        if (hasLetter(letter, word, aux, size) == true)
        {
            cout << "La palabra contiene la letra   " << letter << endl;
        }
        else
        {
            a--;
            cout << "La palabra no contiene la letra " << letter << endl;
        }

        printArray(aux, size);
        if (compareArray(word, aux, size) == true)
        {
            cout << "\nHas adivinado la palabra" << endl;
            return 0;
        }

cout << endl << endl;


    } while (a > 0);

    cout << "Lo siento has perdido :( " << endl;

    return 0;
}

void printArray(char* array, int sizeArray)
{
    for (int i = 0; i < 9; i++)
    {
        cout << array[i] << "\t";
    }
}

bool hasLetter(char letter, char* array1, char* array2, int sizeArray)
{
    bool flag = false;
    for (int i = 0; i < 9; i++)
    {
        if (array1[i] == letter)
        {
            flag = true;
            array2[i] = letter;
        }
    }
    return flag;
}

bool compareArray(char* array1, char* array2, int sizeArray)
{
    for (int i = 0; i < 9; i++)
    {
        if (array1[i] != array2[i])
        {
            return false;
        }
    }
    return true;
}