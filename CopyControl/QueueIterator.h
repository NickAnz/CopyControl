#pragma once

#include "Queue.h"

template<class T>
class QueueIterator
{
private:
	Queue<T> fQueue;

public:
	QueueIterator(const Queue<T>& aQueue)
	{
		fQueue = aQueue;
	}

	const T& operator*()
	{
		return fQueue.top();
	}

	QueueIterator& operator++()
	{
		fQueue.dequeue();
		return *this;
	}
	QueueIterator operator++(int)
	{
		QueueIterator temp = *this;
		++(*this);
		return temp;
	}

	bool operator==(const QueueIterator& aOtherIter) const
	{
		return fQueue.size() == aOtherIter.fQueue.size();
	}

	bool operator!=(const QueueIterator& aOtherIter) const
	{
		return !(*this == aOtherIter);
	}


	QueueIterator begin() const
	{
		return QueueIterator(fQueue);
	}
	QueueIterator end() const
	{
		//create a new iterator and create a new queue to pass in 
		QueueIterator temp = QueueIterator<std::string>(Queue<std::string>());
		return temp;
	}


};