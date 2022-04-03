/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <string>
#include <memory>

#include "../common/Event.hpp"

namespace arcade {

    class IGame {
        public:
            enum Exit : int {
                WIN = 2,
                LOOSE = 1
            };

            virtual ~IGame() = default;

            virtual int isFinish() const = 0;
            virtual int listen(std::shared_ptr<arcade::Event> event) = 0; // Handle Event main part of the game
            virtual int update(float time_elapsed) = 0;
            virtual Matrix getMatrix() const = 0;
            virtual std::vector<std::shared_ptr<Property>> getProperties() const = 0;
        protected:
        private:
    };
};

#endif /* !IGAME_HPP_ */
