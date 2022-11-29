#pragma once
const int MAX = 10;
template<typename T>
class Stack
{
private:
	T items[MAX];
	int top;
public:
	Stack();
	~Stack();
	bool isEmpty() const;
	bool isFull() const;
	bool push(const T& item);
	bool pop(T& item);
};


template<typename T>
Stack<T>::Stack():top(0)
{
}

template<typename T>
Stack<T>::~Stack()
{
}

template<typename T>
bool Stack<T>::isEmpty() const
{
	return top == 0;
}

template<typename T>
bool Stack<T>::isFull() const
{
	return top == MAX;
}

template<typename T>
bool Stack<T>::push(const T& item)
{
	if (!isFull()) {
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template<typename T>
bool Stack<T>::pop(T& item)
{
	if (!isEmpty()) {
		item = items[--top];
		return true;
	}
	else
		return false;
}