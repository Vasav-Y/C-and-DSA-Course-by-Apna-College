#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Enter the character : ";
    cin >> button;

    //*switch case is used to avoid multiple if-else statements
    // if (button == 'a')
    // {
    //     cout << "Hello" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "Namaste" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "Salut" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "Hola" << endl;
    // }
    // else if (button == 'e')
    // {
    //     cout << "Ciao" << endl;
    // }
    // else{
    //     cout<<"Wrong button entered :("<<endl;
    // }

    // !switch case implementation

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Salut" << endl;
        break;
    case 'd':
        cout << "Hola" << endl;
        break;
    case 'e':
        cout << "Ciao" << endl;
        break;

    default:
        cout << "Wrong button entered :(" << endl;
        break;
    }
    return 0;
}