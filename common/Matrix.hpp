/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** Matrix
*/

#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include "./ErrorManager.hpp"
#include <utility>
#include <vector>

class Matrix {
    public:
        Matrix() = default;
        ~Matrix() = default;

        std::size_t &operator()(std::size_t i, std::size_t j) { return _matrix[i][j]; };
        std::vector<std::size_t> &operator[](std::size_t i) { return _matrix[i]; };
        void createLine(std::size_t length) {
            std::vector<std::size_t> tmp;/* 
            if (_sizex > 0 && _sizex != length)
                throw ErrorManager("Invalid Map length is not same"); */
            for (std::size_t i = 0; i < length; i++)
                tmp.push_back(0);
            _matrix.push_back(tmp);
            _sizex = length;
            _sizey++;
        };

        std::size_t getRows() const { return _sizey; };
        std::size_t getCols() const { return _sizex; };

    protected:
    private:
        std::size_t _sizex, _sizey = 0;
        std::vector<std::vector<std::size_t>> _matrix;
};

#endif /* !MATRIX_HPP_ */
