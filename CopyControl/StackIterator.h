#pragma once

#include "Stack.h"

template <class T>
class StackIterator
{
private:
	Stack<T> fStack;
public:
	StackIterator(const Stack<T>& aStack)
	{
		fStack = aStack;
	}

	const T& operator*() const //derefrence current value
	{
		return fStack.top();
	}

	StackIterator& operator++() //prefix increment
	{
		fStack.pop();
		return *this;
	}

	StackIterator operator++(int) // postfix increment
	{
		StackIterator temp = *this;
		++(*this);
		return temp;
	}

	bool operator==(const StackIterator& aOtherStack)
	{
		return fStack.size() == aOtherStack.fStack.size();
	}

	bool operator!=(const StackIterator& aOtherStack)
	{
		return !(*this == aOtherStack);
	}

	StackIterator begin() // at first element
	{
		return StackIterator(fStack); // return a new stack with the refrence fStack
	}


	StackIterator end() // after last element
	{
		//create a new iterator and create a new stack
		StackIterator temp = StackIterator<std::string>(Stack<std::string>());
		return temp;
	}




};