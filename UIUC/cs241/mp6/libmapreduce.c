/* 
 * CS 241
 * The University of Illinois
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <pthread.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include <sys/wait.h>
#include <poll.h>

#include "libmapreduce.h"
#include "libdictionary.h"

static const int BUFFER_SIZE = 2048;


static void process_key_value(const char *key, const char *value, mapreduce_t *mr)
{
}


static int read_from_fd(int fd, char *buffer, mapreduce_t *mr)
{
	/* Find the end of the string. */
	int offset = strlen(buffer);

	/* Read bytes from the underlying stream. */
	int bytes_read = read(fd, buffer + offset, BUFFER_SIZE - offset);
	buffer[offset + bytes_read] = '\0';

	if (bytes_read == 0)
		return 0;

	/* Loop through each "key: value\n" line from the fd. */
	char *line;
	while ((line = strstr(buffer, "\n")) != NULL)
	{
		*line = '\0';

		/* Find the key/value split. */
		char *split = strstr(buffer, ": ");
		if (split == NULL)
			continue;

		//assert(split != NULL);

		/* Allocate and assign memory */
		char *key = malloc((split - buffer + 1) * sizeof(char));
		char *value = malloc((strlen(split) - 2 + 1) * sizeof(char));

		strncpy(key, buffer, split - buffer);
		key[split - buffer] = '\0';

		strcpy(value, split + 2);

		/* Process the key/value. */
		process_key_value(key, value, mr);

		/* Shift the contents of the buffer to remove the space used by the processed line. */
		memmove(buffer, line + 1, BUFFER_SIZE - ((line + 1) - buffer));
		buffer[BUFFER_SIZE - ((line + 1) - buffer)] = '\0';
	}

	return 1;
}


void mapreduce_init(mapreduce_t *mr,
	                void (*mymap)(int, const char *),
					const char *(*myreduce)(const char *, const char *))
{

}

void mapreduce_map_all(mapreduce_t *mr, const char **values)
{

}

void mapreduce_reduce_all(mapreduce_t *mr)
{

}

const char *mapreduce_get_value(mapreduce_t *mr, const char *result_key)
{
	return NULL;
}

void mapreduce_destroy(mapreduce_t *mr)
{

}

