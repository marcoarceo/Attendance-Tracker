#include "Stack.h"

Stack::Stack(stackNode *topNode)
{
	mpTop = topNode;
}

stackNode *& Stack::Pop()
{ // Ofallon Code
	stackNode *pHead = this->mpTop;
	mpTop = mpTop->getNext();
	free(pHead);
	return pHead;
}

stackNode * Stack::Peek()
{ // My code
	return this->mpTop;
}

bool Stack::Push(stackNode *&newData)
{ // My code
	bool status = false;
	stackNode *pMem = NULL;
	pMem = mpTop;

	if (this->isEmpty() == false)
	{
		mpTop = newData;
		mpTop->setNext(pMem);
		status = true;
	}
	return status;
}

bool Stack::isEmpty()
{ // Used O'Fallons example code from the lecture slides
	bool status = false;

	if (this->mpTop == nullptr)
	{
		status = true;
		return status;
	}
	return status;
}

