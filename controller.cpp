#include "controller.h"
tasker controller::tk;
void controller::get_id(crow::request& req, crow::response& res){
    data_web data= tk.get_new_web();
    res.body = "{\"id\":"+std::to_string(data.id)+"}";
    res.end();
}