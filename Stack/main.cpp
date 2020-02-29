/*Daniel Dooley
2-28-20
Data structures
Mr Busch
Create and ensure quality stack runs sucessfully*/




#include "Stack.h" //includes stack.h class header

int main() {//entry point for code execution
	Stack stack1;//creates new stack called stack1

	//testing and debugging code
	cout << "is empty: " << stack1.isEmpty() << endl;
	stack1.push(420);
	cout << "is empty: " << stack1.isEmpty() << endl;
	cout << stack1.top() << "\n";
	stack1.push(17);
	cout << stack1.top() << "\n";
	stack1.push(38);
	cout << stack1.top() << "\n";
	stack1.push(69);
	cout << stack1.top() << "\n";
	cout << "FINISHED INSERTING \n";
	cout << "is full: " << stack1.isFull() << endl;
	cout << stack1.top() << "\n";
	stack1.pop();
	cout << stack1.top() << "\n";
	stack1.pop();
	cout << stack1.top() << "\n";
	stack1.pop();
	cout << stack1.top() << "\n";
	stack1.pop();

	//testing and debugging code




	//for (int i = 0; i < 200; i++) {
	//	stack1.push(i);
	//	cout << stack1.top() << "\n";
	//}
	//for (int j = 0; j < 200; j++) {
	//	cout << stack1.top() << "\n";
	//	stack1.pop();
	//}
	return 0;//exits program with code 0;
}