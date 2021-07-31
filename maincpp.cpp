#include"Link_list.h"

int main()
{
	linked_list listt;
	listt.add_node_end(5);
	listt.add_node_end(10);
	listt.add_node_end(14);
	listt.insert_middle_data(10, 20);
	listt.printlist();
}