#include "Stack.h"

int main() {
	Stack stack1;
	stack1.push(420);
	cout << stack1.top()->info << "\n";
	stack1.push(17);
	cout << stack1.top()->info << "\n";
	stack1.push(38);
	cout << stack1.top()->info << "\n";
	stack1.push(69);
	cout << stack1.top()->info << "\n";
	cout << "FINISHED INSERTING \n";
	cout << stack1.top()->info << "\n";
	stack1.pop();
	cout << stack1.top()->info << "\n";
	stack1.pop();
	cout << stack1.top()->info << "\n";
	stack1.pop();
	cout << stack1.top()->info << "\n";
	stack1.pop();
	for (int i = 2000000; i > 0; i--) {
		stack1.push(i);
		cout << stack1.top()->info << "\n";
	}
	for (int j = 200; j > 0; j--) {
		stack1.pop();
		cout << stack1.top()->info << "\n";

	}
	return 0;
}