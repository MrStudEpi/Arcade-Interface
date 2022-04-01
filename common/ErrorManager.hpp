/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** ErrorManager
*/

#ifndef ERRORMANAGER_HPP_
#define ERRORMANAGER_HPP_

#include <exception>
#include <string>

class ErrorManager : public std::exception {
    public:
        ErrorManager(const std::string &msg) { _msg = msg; }
        ~ErrorManager() = default;

        const char *what() const throw() { return _msg.c_str(); };
    protected:
    private:
        std::string _msg;
};

#endif /* !ERRORMANAGER_HPP_ */
