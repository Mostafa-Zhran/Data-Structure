#include<iostream>
using namespace std;

class Node
{
 public:
	int Data;
	Node *Next;
	Node()
	{
		Next = NULL;
	}
};


class linkedList
{
	Node* Head;
public:

	linkedList()
	{
		Head = NULL;
	}

	bool isEmpty()
	{
		return (Head == NULL);
	}

	void insertTOHead(int data)
	{
		if (isEmpty())
		{
			Node* Node1 = new Node();
			Node1->Data = data;
			Node1->Next = NULL;
			Head = Node1;
		}
		else
		{
			Node* Node1 = new Node();
			Node1->Data = data;
			Node1->Next = Head;
			Head = Node1;
		}
	}

	void insertToTail(int data)
	{
		Node* Node1 = new Node();
		Node1->Data = data;
		Node* temp = Head;
		while (temp->Next != NULL)
		{
			temp = temp->Next;
		}
		temp->Next = Node1;
		Node1->Next = NULL;
	}


	void deletfromHead()
	{
		if (isEmpty())
		{
			cout << "List is empty " << endl;
		}
		else if (Head->Next == NULL)
		{
			delete Head;
			Head = NULL;
		}
		else
		{
			Node* Temp = Head;
			Head = Head->Next;
			delete Temp;
		}
	}

	void deletfromTail()
	{
		if (isEmpty())
		{
			cout << "List is empty " << endl;
		}
		else if (Head->Next == NULL)
		{
			delete Head;
			Head = NULL;
		}
		else
		{
			Node* temp1 = Head;
			Node* Temp2 = 0;
			while (temp1->Next != NULL)
			{
				Temp2 = temp1;
				temp1 = temp1->Next;
			}
			delete temp1;
			Temp2->Next = NULL;
		}
	}

	void disPlay()
	{
		if (isEmpty()) { cout << "List is empty"; }
		else {
			Node* temp = Head;
			while (temp != NULL)
			{
				cout << temp->Data << " ";
				temp = temp->Next;
			}
		}
	}

	int count()
	{
		int counter = 0;
		if (isEmpty()) return counter;
		Node* temp = Head;
		while (temp != NULL)
		{
			counter++;
			temp = temp->Next;
		}
		return counter;
	}

	int Find(int data)
	{
		Node* temp = Head;
		int count = 1;
		while (temp != NULL && temp->Data != data)
		{
			count++;
			temp = temp->Next;
		}
		if (temp->Data == data) return count;
	}

};

int main()
{
	linkedList Linked;
	Linked.insertTOHead(1);
	Linked.insertTOHead(2);
	Linked.insertTOHead(3);
	Linked.insertTOHead(3);

	Linked.disPlay();


}
