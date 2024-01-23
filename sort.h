#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/* Printing helper functions */
void print_array(const int *array, size_t size);