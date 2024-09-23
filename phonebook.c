#include <stdio.h>
#include <string.h>

#include "phonebook.h"

void insert_con (Contact phonebook[], int *count){
	if(*count >= MAX){
		printf("The phonebook is full\n");
		return;
	}

	printf("Name: ");
	scanf("%s", phonebook[*count].name);

	printf("Phone Number(without -): ");
	scanf("%s", phonebook[*count].phonenum);

	printf("The contact %s, %s has been added\n", phonebook[*count].name, phonebook[*count].phonenum);
	(*count)++;
}

void delete_con (Contact phonebook[], int *count){
	char name[30];
	char ans;

	printf("Enter the name to delete: ");
	scanf("%s", name);

	for(int i = 0; i < *count; i++){
		if(strcmp(phonebook[i].name, name) == 0){
			printf("Do you want to delete the contact:\n");
			printf("Name: %s\nPhone Number: %s\n", phonebook[i].name, phonebook[i].phonenum);
			
			printf("Are you sure you want to delete contact?(y/n): ");
			scanf(" %c", &ans);

			if(ans == 'y' || ans == 'Y'){
				for(int j = i; j < *count - 1; j++){
				phonebook[j] = phonebook [j + 1];
				}
				(*count)--;
				printf("The contact has been deleted\n");
				return;
			}
			else{
				return;
			}
		}
	}
	printf("Contact information not found\n");
}

void search_con (Contact phonebook[], int count){
	char name[30];
	printf("Enter the name to search: ");
	scanf("%s", name);

	for(int i = 0; i < count; i++){
		if(strcmp(phonebook[i].name, name) == 0){
			printf("Name: %s\nPhone Number: %s\n", phonebook[i].name, phonebook[i].phonenum);
		       return;
		}
	}
	printf("Contact information not found\n");
}

void list_con (Contact phonebook[], int count){
	if(count == 0){
		printf("Phonebook is empty\n");
		return;
	}
	for(int i = 0; i < count; i ++){
		printf("%d.\nName: %s\nPhone Number: %s\n\n", i+1, phonebook[i].name, phonebook[i].phonenum
		      );
	}
}

