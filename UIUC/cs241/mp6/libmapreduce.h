/* 
 * CS 241
 * The University of Illinois
 */

#ifndef _LIBMAPREDUCE_H_
#define _LIBMAPREDUCE_H_

#include <pthread.h>
#include "libdictionary.h"

typedef struct _mapreduce_t
{

} mapreduce_t;


void mapreduce_init(mapreduce_t *mr,
	                void (*mymap)(int, const char *),
					const char *(*myreduce)(const char *, const char *));
void mapreduce_map_all(mapreduce_t *mr, const char **values);
void mapreduce_reduce_all(mapreduce_t *mr);
const char *mapreduce_get_value(mapreduce_t *mr, const char *result_key);
void mapreduce_destroy(mapreduce_t *mr);

#endif