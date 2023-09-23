#pragma once
#include "crow.h"
#include"tasker.h"
#include <thread>

namespace controller {
    extern tasker tk;
    void get_id(crow::request& req, crow::response& res);
} // namespace controller
