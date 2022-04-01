/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** EventEmitter
*/

#ifndef EVENTEMITTER_HPP_
#define EVENTEMITTER_HPP_

#include <vector>

namespace arcade {

    class Event {
        public:
            enum EList {
                AKEY_PRESS,
                AMOUSE_BUTTON,
                AMOUSE_MOVED
            };
            enum KeyL : int {
                AKEY_UP,
                AKEY_DOWN,
                AKEY_LEFT,
                AKEY_RIGHT,
            };
            Event(int t, std::vector<int> v, int s = -1) : _type(t), _value(v), _spectype(s) {};

            const int getSpecificType() const { return _spectype; };
            const int getType() const { return _type; };
            const std::vector<int> getValue() const { return _value; };
        private:
            int _type;
            std::vector<int> _value;
            int _spectype;
    };
}

#endif /* !EVENTEMITTER_HPP_ */
