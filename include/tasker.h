#pragma once
#include"vector"
#include<iostream>
struct data_web
{
    int id=-1;
    void init(){
        this->id=-1;
        this->busy=false;
    }
    bool busy=false;
};

class tasker{
public:
    tasker(){
        client_web.resize(25);
        for(int i=0;i<client_web.size();i++){
            client_web[i].id=i;
        }
    }
    data_web get_new_web(){
         data_web t;
         t.busy=true;
         for(int i=0;i<client_web.size();i++){
            if(client_web[i].busy==false){
                client_web[i].init();
                client_web[i].id=i;
                client_web[i].busy=true;
                return client_web[i];
            }
         }
        t.id=client_web.size();
        client_web.push_back(t);
        return t;
    }
    void exit_auth(int id){
        client_web[id].init();
    }
    data_web  get_data_id(int id){
        
        return client_web[id];
    }
    ~tasker(){

    }
private:
    std::vector<data_web> client_web;
};