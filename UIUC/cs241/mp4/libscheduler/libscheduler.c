/*
 * Machine Problem #4
 * CS 241
 * The University of Illinois
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libscheduler.h"
#include "../libpriqueue/libpriqueue.h"


/* You may need to define some global variables or a struct to 
   store your job queue elements. */
typedef struct _job_t
{

} job_t;


/*
 * schedular_start_up()
 * Initalizes the scheulder.
 */
void scheduler_start_up(int cores, scheme_t scheme)
{

}


/*
 * scheduler_new_job()
 * Called when a new job arrives.
 *
 * Returns: If the job arriving should be scheduled to run during the next
 * time cycle, return the zero-based index of the core the job should be
 * scheduled on. If another job is already running on the core specified,
 * this will preempt the currently running job.
 *
 * If multiple cores are idle, the job should be assigned to the core with the
 * lowest id.
 *
 * Otherwise, return -1.
 */
int scheduler_new_job(int job_number, int time, int running_time, int priority)
{
	return -1;
}


/*
 * scheduler_job_finished()
 * Called when a job has completed execution.
 *
 * Returns: If any job should be scheduled to run on the core free'd up by the
 * finished job, return the job_number of the job that should be scheduled to
 * run on core core_id.
 *
 * Otherwise, if the core should remain idle, return -1.
 */
int scheduler_job_finished(int core_id, int job_number, int time)
{
	return -1;
}


/*
 * scheduler_quantum_expired()
 * When the scheme is set to RR, called when the quantum timer has expired
 * on a core.
 *
 * Returns: If any job should be scheduled to run on the core free'd up by
 * the quantum expiration, return the job_number of the job that should be
 * scheduled to run on core core_id.
 *
 * Otherwise, if the core should remain idle, return -1.
 */
int scheduler_quantum_expired(int core_id, int time)
{
	return -1;
}


/*
 * scheduler_average_waiting_time()
 * Returns the average waiting time of all jobs scheduled by your scheduler.
 */
float scheduler_average_waiting_time()
{
	return 0.0;
}


/*
 * scheduler_average_turnaround_time()
 * Returns the average turnaround time of all jobs scheduled by
 * your scheduler.
 */
float scheduler_average_turnaround_time()
{
	return 0.0;
}


/*
 * scheduler_average_response_time()
 * Return the average response time of all jobs scheduled by your scheduler.
 */
float scheduler_average_response_time()
{
	return 0.0;
}


/*
 * scheduler_clean_up()
 * Free any memory associated with your scheduler.
 */
void scheduler_clean_up()
{

}


/*
 * scheduler_show_queue()
 * This function may print out any debugging information you choose. This
 * function will be called by the simulator after every call the simulator
 * makes to your scheduler.
 *
 * This function is not required and will not be graded. You may leave it
 * blank if you do not find it useful.
 */
void scheduler_show_queue()
{

}


