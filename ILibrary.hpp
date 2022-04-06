/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** ILibrary
*/

#ifndef ILIBRARY_HPP_
#define ILIBRARY_HPP_

#include "../common/Matrix.hpp"
#include "../common/Event.hpp"
#include "../common/Property.hpp"

#include <vector>
#include <string>
#include <memory>

namespace arcade {

    class ILibrary {
        public:
            virtual ~ILibrary() = default;

            //Common
            virtual bool isOpen() = 0;
            virtual std::shared_ptr<arcade::Event> getCurrentEvent() = 0;
            virtual void close() = 0;

            //Game
            virtual void init(std::vector<std::shared_ptr<Property>>) = 0;
            virtual void render(Matrix matrix) = 0; //Render management for Game*

            //Menu
            virtual void init() = 0;
            virtual void render() = 0; // Render managemet for the Menu
        protected:
        private:
    };
}

#endif /* !ILIBRARY_HPP_ */
