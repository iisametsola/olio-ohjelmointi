#include "animal.h"
#include "dog.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Animal a;
    a.callOut();

    Dog d;
    d.callOut();

    return 0;
}
