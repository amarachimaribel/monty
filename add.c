#include "monty.h"
/**
 * f_add - That adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: do not return
*/
void f_add(unsigned int counter, stack_t **head)
{
	stack_t *h;
	int len = 0, auxx;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxx = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
