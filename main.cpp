#include "linked_list.h"

int main() {
    DLL list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    cout << "Elements in the list: ";
    list.printForward();

    return 0;
}
