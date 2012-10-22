/** @file part1.c */

/*
 * Machine Problem #1
 * CS 241
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "mp1-functions.h"

/**
 * (Edit this function to print out the ten "Illinois" lines in mp1-functions.c in order.)
 */
int main()
{
  first_step(81);

  int num = 132;
  second_step(&num);

  int tmp = 8942;
  int *value[] = {&tmp};
  double_step(value);

  strange_step(0);

  char str[] = "123";
  empty_step(str);

  char s1[] = "uuuuuuuuuuuuuuu";
  two_step((void *)s1, s1);

  three_step(s1, s1+2, s1+4);

  char s2[4];
  s2[0] = 0;
  s2[1] = s2[0];
  s2[2] = s2[1] + 8;
  s2[3] = s2[2] + 8;
  step_step_step(s2, s2, s2);

  char c  = 'A';
  it_may_be_odd(&c, (int)c);

  int d = 2049;
  the_end((void *)(&d), (void *)(&d));


	return 0;
}
