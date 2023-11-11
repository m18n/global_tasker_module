#pragma once
#include"web_server.h"
#include <iostream>

class global_tasker_node {
public:
  global_tasker_node() {
    web.set_name_server("global_tasker_node");
    web.add_conn_server("127.0.0.1:3000");
    web.start_server(3001);
  }
private:
  server::web_server web;
 
};