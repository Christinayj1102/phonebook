#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#define MAX 100

typedef struct {
	char name [30];
	char phonenum [16];
} Contact;

void insert_con(Contact phonebook[], int *count);
void delete_con(Contact phonebook[], int *count);
void search_con(Contact phonebook[], int count);
void list_con(Contact phonebook[], int count);

#endif //PHONEBOOK.H
