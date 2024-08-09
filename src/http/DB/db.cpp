//
// Created by Aventador on 2024/7/18.
//

#include "db.h"
#include <iostream>

bool execute_sql(pqxx::connection &C, const std::string &sql) {
    pqxx::work W(C);
    W.exec(sql);
    W.commit();
    std::cout << "Executed: " << sql << std::endl;
}

bool db::create_database(const std::string &name) {
    try {
        // user=postgres password=secret hostaddr=127.0.0.1 port=5432
        pqxx::connection C("dbname=postgres user=postgres password=secret");
        pqxx::nontransaction W(C);
        pqxx::result R = W.exec("SELECT 1 FROM pg_database WHERE datname = " + W.quote(name));
        if (R.empty()) {
            W.exec("CREATE DATABASE" + W.quote_name(name));
            std::cout << "Database " << name << " created successfully." << std::endl;
        } else {
            std::cout << "Database " << name << " already exists." << std::endl;
        }
        W.commit();
        return true;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return false;
}

bool db::create_user(const std::string &name, const std::string &password) {

}

