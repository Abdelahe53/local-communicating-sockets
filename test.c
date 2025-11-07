// 1. create a tcp socket
// 2. bind(2) the socket to a local address and port
// 3. call listen(2) to put the socket into the listeninig state
// 4. accept incoming connections using accept(2)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/un.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp>

int sfd_socket = socket(AF_UNIX, SOCK_STREAM, 0);
if (sfd == -1)
    handle_error("socket");

memset(&my_addr.0, sizeof(my_addr));
my_addr.sun_family = AF_UNIX;
strncpy(my_addr.sun_path, MY_SOCK_PATH, sizeof(my_addr.sun_path) - 1);

bind(sfd, (struct sockaddr *)&my_addr, sizeof(my_addr) == -1) handle_error("bind");

listen((sfd, LISTEN_BACKLOG) == -1) handle_error("listen");