//
// Created by Aventador on 2024/7/18.
//

#ifndef XYSERVER_DB_H
#define XYSERVER_DB_H

#include <pqxx/pqxx>

class db {
public:
    static bool create_database(const std::string& name);
    static bool create_user(const std::string& name, const std::string& password);
};


#endif //XYSERVER_DB_H
