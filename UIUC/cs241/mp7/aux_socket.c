#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

#include "aux_socket.h"

/**
 * creates a new socket file descriptor, binds to the local port port,
 * then sets up a listening queue.
 */
int newServerSocket(const char* port) {
	int serverfd;

	// your code goes here
	

	return serverfd;
}

/**
 * creates a new socket file descriptor, connects to host and port
 */

int newClientSocket(const char *host, const char *port){
	int clientfd;

	// your code goes here
	
	return clientfd;
}

/**
 * accepts new connections on a server socket and returns the socket
 * file descriptor for the client.
 */
int acceptSocket(int serverFd) {
	int acceptfd;

	// your code goes here
	
	return acceptfd;
}

/**
 * closes socket file descriptor.
 */
void closeSocket(int sockfd) {

}

