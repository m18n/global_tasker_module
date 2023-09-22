#pragma once
#include "url.h"

#include <iostream>

class global_tasker_node {
public:
  global_tasker_node() {
    url::init_api_url(tasker_node_api);
    tasker_node_api.port(3000).run();
  }
  void telegram_auth(){
    
  }
private:

  crow::SimpleApp tasker_node_api;
  
 
};