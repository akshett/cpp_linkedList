#include <iostream>

struct Node<template T>{
	T value;
	Node<T>* next;
};

class LinkedList{
	private:
		Node<int> first;
		Node<int> last;

		int size;

	public:
		LinkedList(int init)
		{
			first.value = init;
			last = first;
		}

		void addElement(int val)
		{
			Node<int> tmp;
			tmp.value = val;
			last.next = tmp;
			last = tmp;

		}

		void popFirst()
		{
			if (last == first)
			{
				std::cout << "Only one element present in the linked list. Will become null if it is popped" << '\n';
				return;
			}

			Node<int> tmp = first;
			first = tmp.next;
		}

		void addNode(const Node<int>& nextNode)
		{
			Node<int> tmp = last;
			tmp.next = nextNode;
			last = nextNode;
		}


};
