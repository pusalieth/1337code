#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

void deleteNode(ListNode node) {
	node* curr = head;
	node* trail = 0;
	// empty list condition
	if (head == 0) {
		cout << "No Node to delete";
	}
	else {
		whlie (curr != 0) {
			if (curr -> name == name) {
				break;
			}
			else {
				trail = curr;
				curr = curr -> next;
			}
		}
		// Node doesn't exist condition
		if (curr == 0) {
			cout << "Node not found";
		}
		else {
			// delete from head node
			if (head == curr) {
				head = head -> next;
			}
			// delete beyond head node
			else {
				trail -> next = curr -> next;
			}
			delete curr;
			size--;
		}
	}
}

int main() {
}
