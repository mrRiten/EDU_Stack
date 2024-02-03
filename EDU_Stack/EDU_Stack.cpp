#include <stdio.h>
#include <iostream>

using namespace std;

class Stack {
public:
	Stack(int data) {
		this->data = data;
		this->nextItem = nullptr;
	}
	Stack(int data, Stack* nextItem) : Stack(data) {
		this->nextItem = nextItem;
	}

	int getData() const {
		return this->data;
	}

	Stack* getNextItem() const {
		return this->nextItem;
	}

private:
	int data;
	Stack* nextItem;
};


class StackList {
public:
	StackList(Stack* firstItem) {
		this->firstItem = firstItem;
	}

	void addItem(int data) {
		this->firstItem = new Stack(data, this->firstItem);
	}

	void delLastItem() {
		Stack* delItem = firstItem;
		firstItem = firstItem->getNextItem();
		delete delItem;
	}

	void printItems() {
		Stack* currentItem = firstItem;
		cout << "Data for StackList:\n";
		while (currentItem != nullptr)
		{
			printf("Stack data: %d\n", currentItem->getData());
			currentItem = currentItem->getNextItem();
		}
	}

private:
	Stack* firstItem;
};

void main() {
	StackList stackList = StackList(new Stack(10));

}