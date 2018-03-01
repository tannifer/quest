#include <iostream>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#define PORT 3000


void openNetwork() {
  int sd, new_socket, valread;
  int opt =1;
  struct sockaddr_in server;
  
  server.sin_family = AF_INET;
  server.sin_port = htons(PORT);
  server.sin_addr.s_addr = INADDR_ANY;
  // Creating socket file descriptor
  if ((sd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
      perror("socket failed");
      exit(EXIT_FAILURE);
    }
  
  if (setsockopt(sd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,&opt, sizeof(opt)))
    {
      perror("setsockopt");
      exit(EXIT_FAILURE);
    }
  
  if (bind(sd, (struct sockaddr *)&server,sizeof(server))<0)
    {
      perror("bind failed");
      exit(EXIT_FAILURE);
    }
  if (listen(sd, 3) < 0)
    {
      perror("listen");
      exit(EXIT_FAILURE);
    }
  
   
}
