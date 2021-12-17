#pragma once
#include <assert.h>
namespace Algo {
	template <class T>
	class Stack
	{
	private:
		struct Node
		{
			T* data;
			Node* next;
		};

	public:
		void push(T* E);	//empiler
		void pop_void();
		T* pop();			//dépiler
		bool empty()const;	//tester si la pile est vide ou non
		T* top()const;		// retourner le sommet
		void print();
		static Stack* creator(); // fonction : faire appel au construceur privé
		static void garbage(Stack*); // // fonction :  faire appel au déconstruceur privé
	private:
		Node* head;
		Stack();
		~Stack();



	};







	template<class T>
	Algo::Stack<T>::Stack()
	{
		this->head = NULL;
	}

	template<class T>
	Algo::Stack<T>::~Stack()
	{
		while (this->head)
			this->pop_void();
		// delete this->head
		// this->head=0;
	}

	template<class T>
	void Algo::Stack<T>::push(T* E)
	{

		Node* newNode = new Node();
		//newNode->setData(E);
		assert(newNode != 0); // en mode débogage 
		// try catch

		newNode->data = E;
		newNode->next = this->head;
		this->head = newNode;
	}
	template<class T>
	void Algo::Stack<T>::pop_void()
	{
		assert(!this->empty());
		Node* supp = this->head;
		this->head = this->head->next;
		delete supp;
		supp = 0;

	}
	template<class T>
	T* Algo::Stack<T>::pop()
	{
		assert(!this->empty());
		Node* supp = this->head;
		this->head = this->head->next;
		supp->next = NULL;
		return supp->data;
	}
	template<class T>
	bool Algo::Stack<T>::empty() const
	{
		//bool res = (this->head == 0);
		return (this->head == NULL);
	}
	template<class T>
	T* Algo::Stack<T>::top() const
	{
		assert(!this->empty());
		return this->head->data;
	}
	template<class T>
	void Algo::Stack<T>::print()
	{
		Stack* tmp = new Stack();
		assert(!this->empty());

		while (this->head)
		{
			this->top()->print();
			tmp->push(this->pop());

		}
		while (tmp->head) {
			this->push(tmp->pop());

		}

	}


	template<class T>
	Stack<T>* Algo::Stack<T>::creator()
	{
		Stack* s = new Stack();
		assert(s);
		return s;
	}
	template<class T>
	void Algo::Stack<T>::garbage(Stack<T>* s)
	{
		if (s);
		delete s;// appel au deconstrutceur
	}
}
