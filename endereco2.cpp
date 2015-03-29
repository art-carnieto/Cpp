#include <iostream>
using namespace std;
int main(void)
{
    short testScore;
    float myGPA;
    cout << "O endereco de testScore e " << &testScore << "\n";
    cout << "O tamanho de testScore e " << sizeof(testScore) << "\n";
    cout << "O endereco de myGPA e " << &myGPA << "\n";
    cout << "O tamanho de myGPA e " << sizeof(myGPA) << "\n";
    cin.get();
    return 0;
}
