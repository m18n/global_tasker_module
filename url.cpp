#include "url.h"
void url::init_api_url(crow::SimpleApp &app) {
  CROW_ROUTE(app, "/")
  ([]() { return "global tasker node"; });
  // // TELEGRAM
  // CROW_ROUTE(app, "/api/telegram/command/<int>/getauthcode")
  // ([]( crow::request &req, crow::response &res,int id)  { controller::telegram::get_auth_code(req,res,id); });
  // CROW_ROUTE(app, "/api/telegram/getid")
  // ([]( crow::request &req, crow::response &res)  { controller::telegram::get_id(req,res); });
  // CROW_ROUTE(app, "/api/telegram/command/<int>/exit")
  // ([]( crow::request &req, crow::response &res,int id)  { controller::telegram::exit_auth(req,res,id); });
  //MANAGER

  //CHATGPT


}