//#include <iostream>
//#include "main.h"
//#include "Menu.hpp"
//#include "DynamicArray.hpp"
//#include "ArraySequence.hpp"
//#include "LinkedList.hpp"
//#include "LinkedListSequence.hpp"
//#include "Sequence.hpp"
//
//using namespace std;
//
//int notmain()
//{
//    int flag = 0;
//    while (!flag) {
//        string strings[4] = {"ArraySequence", "LinkedListSequence", "Sequence", "Exit"};
//        Menu menu(4, strings);
//        int res = menu.Choice("Main menu");
//        //cout << res;
//
//        switch (res) {
//            case 0: {flag=1; break;}
//            case 1: {
//                cout << "Creating array with n size, enter n: " << endl;
//                int n;
//                cin >> n;
//                cout << "Enter elements:" << endl;
//                int* elems = new int [n];
//                for (int i = 0; i < n; ++i) {
//                    cout << i << " " << "element: ";
//                    cin >> elems[i];
//                    cout << endl;
//                }
//                cout << endl;
//                //DynamicArray<int> dar (elems, n);
//                ArraySequence<int> arraySequence(elems, n);
//                int flag1 = 0;
//                while (!flag1) {
//                string strings1[7] = {"Get first element", "Get element", "Get last element", "Insert element",
//                                      "Append", "Prepend", "print"};
//                Menu menu1(7, strings1);
//                int res1 = menu1.Choice("Operations");
//
//                    switch (res1) {
//                        case 0: {flag1=1; break;}
//                        case 1: {
//                            cout << endl << "First element: -----> " << arraySequence.GetFirst() << endl << endl;
//                            break;
//                        }
//                        case 2: {
//                            int idx = 0;
//                            cout << "Enter index of element";
//                            cin >> idx;
//                            cout << endl << "Element: -----> " << arraySequence.Get(idx) << endl << endl;
//                            break;
//                        }
//                        case 3: {
//                            cout << endl << "Last element: -----> " << arraySequence.GetLast() << endl << endl;
//                            break;
//                        }
//
//                        case 4: {
//                            int ins = 0;
//                            cout << "Enter index to insert";
//                            cin >> ins;
//                            cout << "Enter element to insert";
//                            int newelem = 0;
//                            cin >> newelem;
//                            arraySequence.InsertAt(newelem, ins);
//                            break;
//                        }
//
//                        case 5: {
//                            int newel = 0;
//                            cout << "Enter elem: ";
//                            cin >> newel;
//                            cout << endl;
//                            arraySequence.Append(newel);
//                            break;
//                        }
//
//                        case 6: {
//                            int newelement = 0;
//                            cout << "Enter elem: ";
//                            cin >> newelement;
//                            cout << endl;
//                            arraySequence.Prepend(newelement);
//                            break;
//
//                        }
//                        case 7: {
//                            arraySequence.print();
//                            break;
//                        }
//
//
//                    }
//                }
//                delete[] elems;
//                break;
//            }
//
//            case 2: {
//                break;
//            }
//            case 3: {
//                break;
//            }
//
//            case 4: {
//                break;
//            }
//
//            default:
//                break;
//        }
//
//    }
//
//	return 0;
//}