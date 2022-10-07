#ifndef DECK_H
#define DECK_H

#include <stdio.h>
#include <stdlib.h>

typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*));
void swap(int *array, int a, int b);
void swapper(listint_t *a, listint_t *b);
void bubble_sort(int *array, size_t size);
#endif
