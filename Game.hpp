/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** Game
*/

#ifndef GAME_HPP_
#define GAME_HPP_

#include "../common/ErrorManager.hpp"
#include "../common/Vector.hpp"
#include "../common/Matrix.hpp"
#include "../common/Property.hpp"
#include "./IGame.hpp"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>

namespace arcade {
    class Game: public IGame {
        public:
            virtual ~Game() = default;

            void clear();
            void loadMap(const std::string filename);
            Vector2D<int> getCoord(char toFind);
            std::vector<PropertyLinker> getProperties() const { return _props; };
            bool collideWall(Vector2D<int>);

            /* Common */
            Matrix getMatrix() const { return _matrix; };
        protected:
            Matrix _matrix;
            std::vector<PropertyLinker> _props;
        private:
    };
}

#endif /* !GAME_HPP_ */
