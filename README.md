# Stack Implementation in C++

This is a simple C++ implementation of a stack using a linked list structure. The `Stack` class represents individual elements in the stack, and the `StackList` class manages the stack as a whole.

## Stack Class

The `Stack` class has the following attributes and methods:

### Attributes

- `data`: Integer data stored in the stack element.
- `nextItem`: Pointer to the next element in the stack.

### Methods

- `Stack(int data)`: Constructor for creating a stack element with the specified data.
- `Stack(int data, Stack* nextItem)`: Constructor for creating a stack element with the specified data and a pointer to the next element.
- `int getData() const`: Getter method to retrieve the data of the stack element.
- `Stack* getNextItem() const`: Getter method to retrieve a pointer to the next element in the stack.

## StackList Class

The `StackList` class manages the stack and has the following methods:

### Methods

- `StackList(Stack* firstItem)`: Constructor for creating a stack with the initial element.
- `void addItem(int data)`: Adds a new element with the specified data to the top of the stack.
- `void delLastItem()`: Removes the last element from the top of the stack.
- `void printItems()`: Prints the data of all elements in the stack.

## Usage

```cpp
int main() {
    // Create a stack with the initial element having data 10
    StackList stackList = StackList(new Stack(10));

    // Add new elements to the stack
    stackList.addItem(20);
    stackList.addItem(30);

    // Print the data of all elements in the stack
    stackList.printItems();

    // Remove the last element from the stack
    stackList.delLastItem();

    // Print the data after deletion
    stackList.printItems();

    return 0;
}
```
