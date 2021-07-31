#pragma once
#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

class linked_list{ 
private:
	node* head;
	node* tail;
	node* traversing_by_data(int data);
	node* traversing_by_index(int index);
public:
	linked_list();
	void add_node_end(int data);
	void insert_middle_data(int beforedata,int data);
	void insert_middle_index(int beforeindex,int data);
	void insert_start(int data);
	void delete_by_data(int data);
	void delete_by_index(int index);
	int search_by_index(int index);
	void printlist();
};
	
		
