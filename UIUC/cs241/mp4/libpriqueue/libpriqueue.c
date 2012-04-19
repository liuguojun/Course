/*
 * Machine Problem #4
 * CS 241
 * The University of Illinois
 */

#include <stdlib.h>
#include <stdio.h>

#include "libpriqueue.h"

/*
 * You can find the struct priqueue_t in libpriqueue.h.
 */


/*
 * priqueue_init()
 * Initializes the priqueue_t data structure.
 */
void priqueue_init(priqueue_t *q, int(*comparer)(const void *, const void *))
{

}


/*
 * priqueue_offer()
 * Inserts the specified element into this priority queue.
 *
 * Returns: The zero-based index where ptr is stored in the priority queue,
 * where 0 indicates that ptr was stored at the front of the priority queue.
 */
int priqueue_offer(priqueue_t *q, void *ptr)
{
	return -1;
}


/*
 * priqueue_peek()
 * Retrieves, but does not remove, the head of this queue, returning NULL if
 * this queue is empty.
 *
 * Returns: The head of the queue, or NULL if the queue is empty.
 */
void *priqueue_peek(priqueue_t *q)
{
	return NULL;
}


/*
 * priqueue_poll()
 * Retrieves and removes the head of this queue, or NULL if this queue
 * is empty.
 *
 * Returns: The head of this queue, or NULL if this queue is empty.
 */
void *priqueue_poll(priqueue_t *q)
{
	return NULL;
}


/*
 * priqueue_at()
 * Returns the element at the specified position in this list, or NULL if
 * the queue does not contain an index'th element.
 *
 * Returns: The index'th element in the queue, or NULL if the queue does
 * not contain in index'th element.
 */
void *priqueue_at(priqueue_t *q, int index)
{
	return NULL;
}


/*
 * priqueue_remove()
 * Removes all instances of ptr from the queue. This function should not
 * use the comparer function, but check if the data contained in each
 * element of the queue is equal (==) to ptr.
 *
 * Returns: The number of entries removed.
 */
int priqueue_remove(priqueue_t *q, void *ptr)
{
	return 0;
}


/*
 * priqueue_remove_at()
 * Removes the specified index from the queue, moving later elements up
 * a spot in the queue to fill the gap.
 *
 * Returns: The element removed from the queue, or NULL if the specified
 * index does not exist.
 */
void *priqueue_remove_at(priqueue_t *q, int index)
{
	return 0;
}


/*
 * priqueue_size()
 * Returns the number of elements in the queue.
 *
 * Returns: The number of elements in the queue.
 */
int priqueue_size(priqueue_t *q)
{
	return 0;
}


/*
 * priqueue_destroy()
 * Destroys and frees all the memory associated with q.
 */
void priqueue_destroy(priqueue_t *q)
{

}
