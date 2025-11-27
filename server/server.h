/*server.h*/

#ifndef _SERVER_H_
#define _SERVER_H_

#include <string>

class Server {
public:
   Server();
   virtual ~Server();

   virtual void serverGetType() = 0;
   virtual void serverGetAPI() = 0;
   virtual void serverConnectDatabase() = 0;
   virtual void serverGetDatabase() = 0;
   virtual void serverStreamMessage(const char* pMsg) = 0;
   virtual void serverStreamMessageS(std::string& pStream) = 0;

   Server& getServer(Server& server);
   const Server& getServer(const Server& server);

};

#endif
