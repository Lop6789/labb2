#include <iostream>
#include "main.h"
#include "Menu.hpp"
#include "Test.hpp"
#include "DynamicArray.hpp"
#include "ArraySequence.hpp"
#include "LinkedList.hpp"
#include "LinkedListSequence.hpp"
#include "Sequence.hpp"
#include "ListSeq.hpp"
#include "ArrSeq.hpp"


using namespace std;

int main() {
	int flag = 0;
	while (!flag)
	{
		string strings[4] = { "ArraySequence", "LinkedListSequence", "Test ArraySequence", "Test LinkedListSequence" };
		Menu menu(4, strings);
		int res = menu.Choice("Main menu");
		switch (res) {
			case 0: {flag = 1; break; }
			case 1: {	ArrSeq();
				break;
			}
			case 2: {
				ListSeq();
				break;
			}
			case 3: {
				ArrTest();
				break;
			}
			case 4: {
				ListTest();
				break;
			}
		}
	}

	return 0;
}