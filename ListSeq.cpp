#include <iostream>
#include "Menu.hpp"
#include "LinkedListSequence.hpp"
#include "ArraySequence.hpp"


using namespace std;

void ListSeq() {
    cout << "Creating array with n size, enter n: " << endl;
    int n;
    cin >> n;
    cout << "Enter elements:" << endl;
    int* elems = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << i << " " << "element: ";
        cin >> elems[i];
        cout << endl;
    }
    cout << endl;
    LinkedListSequence<int> arraySequence(elems, n);


    int flag1 = 0;
    while (!flag1) {
        string strings1[9] = { "Get first element", "Get element", "Get last element", "Insert element",
                                "Append", "Prepend", "print", "Get subsequence", "Concat"};
        Menu menu1(9, strings1);
        int res1 = menu1.Choice("Operations");
        switch (res1) {
        case 0: {flag1 = 1; break; }
        case 1: {
            cout << endl << "First element: -----> " << arraySequence.GetFirst() << endl << endl;
            break;
        }
        case 2: {
            int idx = 0;
            cout << "Enter index of element";
            cin >> idx;
            cout << endl << "Element: -----> " << arraySequence.Get(idx) << endl << endl;
            break;
        }
        case 3: {
            cout << endl << "Last element: -----> " << arraySequence.GetLast() << endl << endl;
            break;
        }

        case 4: {
            int ins = 0;
            cout << "Enter index to insert";
            cin >> ins;
            cout << "Enter element to insert";
            int newelem = 0;
            cin >> newelem;
            arraySequence.InsertAt(newelem, ins);
            break;
        }

        case 5: {
            int newel = 0;
            cout << "Enter elem: ";
            cin >> newel;
            cout << endl;
            arraySequence.Append(newel);
            break;
        }

        case 6: {
            int newelement = 0;
            cout << "Enter elem: ";
            cin >> newelement;
            cout << endl;
            arraySequence.Prepend(newelement);
            break;

        }
        case 7: {
            arraySequence.print();
            break;
        }
        case 8: {
            cout << "Enter startIndex: ";
            int startIndex = 0;
            cin >> startIndex;
            cout << "Enter endIndex: ";
            int endIndex = 0;
            cin >> endIndex;
            (arraySequence.GetSubsequence(startIndex, endIndex))->print();
            break;
        }

        case 9: {
            cout << "Creating array with k size to Concatinate, enter k: " << endl;
            int k;
            cin >> k;
            cout << "Enter elements:" << endl;
            int* newelems = new int[k];
            for (int i = 0; i < k; i++) {
                cout << i << " " << "element: ";
                cin >> newelems[i];
                cout << endl;
            }
            cout << endl;
            ArraySequence<int> newarraySequence(newelems, k);
            //newarraySequence.print();
            (arraySequence.Concat(&newarraySequence))->print();
            delete[] newelems;
            break;

        }
        }


    }
    delete[] elems;
}
