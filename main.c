#include <stdio.h>
#include <string.h>

#include "phonebook.h"

int main(){
	Contact phonebook[MAX];
	int count = 0;
	int choice;

	while(1){
		printf("\nPhoneBook\n");
		printf("1. Insert contact\n");
		printf("2. Delete contact\n");
		printf("3. Search contact\n");
		printf("4. List contact\n");
		printf("5. End\n");
		printf("Choice Menu: ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				insert_con(phonebook, &count);
				break;
			case 2:
				delete_con(phonebook, &count);
				break;
			case 3:
				search_con(phonebook, count);
				break;
			case 4:
				list_con(phonebook, count);
				break;
			case 5:
				printf("End the phonebook program\n");
				return 0;
			default:
				printf("Wrong choice. Try again.\n");
		}
	}
}
