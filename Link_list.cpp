#include"Link_list.h"

node* linked_list::traversing_by_data(int data) 
{
	node* temp;
	temp = head;
	while (temp != NULL)
	{
		if (temp->data == data)
		{
			return temp;
			break;
		}
		else {
			temp = temp->next;
		}
	}
}

node* linked_list::traversing_by_index(int index)
{
	node* temp;
	temp = head;
	int i;
	for (i = 1; i < index; i++)
	{
		temp = temp->next;
	}
	return temp;
}

linked_list::linked_list() {
	head = NULL;
	tail = NULL;
}
void linked_list::add_node_end(int data) {
	node* newnode = new node;
	newnode->data = data;
	newnode->next = NULL;
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
		
	}
	else {
		tail->next = newnode;
		tail = newnode;
		
	}
}
void linked_list::insert_middle_data(int beforedata, int data)
{
	node* temp = traversing_by_data(beforedata);
	node* newnode = new node;
	newnode->data = data;
	newnode->next = temp->next;
	temp->next = newnode;
}

void linked_list::delete_by_data(int data)
{
	node* temp = traversing_by_data(data);
	if (temp == head) {
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	else {
		node* prenode = head;
		while (prenode != NULL)
		{
			if (prenode->next == tail) {
				tail = prenode;
				tail->next = NULL;
				delete temp;
				break;
			}
			else if (prenode->next == temp)
			{
				prenode->next = temp->next;
				temp->next = NULL;
				delete temp;
				break;
			}
			else
				prenode = prenode->next;
		}
	}

}
void linked_list::printlist()
{
	node* temp=head;
	while (temp != NULL)
	{
		cout << temp->data<<endl;
		temp = temp->next;
	}

}