/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** Vector
*/

#ifndef VECTOR_HPP_
#define VECTOR_HPP_

template <typename T>
class Vector2D
{
    public:
        Vector2D(T x, T y) : _x(x), _y(y) {};
        Vector2D(): _x(0), _y(0) {};
        ~Vector2D() = default;

        T getX() const { return _x; };
        T getY() const { return _y; };
        Vector2D operator-(Vector2D<T> vec) { return Vector2D<T>(_x - vec.getX(), _y - vec.getY()); };
        Vector2D operator+(Vector2D<T> vec) { return Vector2D<T>(_x + vec.getX(), _y + vec.getY());};
        Vector2D operator*(T factor) { return Vector2D<T>(_x * factor, _y * factor);};
        Vector2D operator*(Vector2D<T> vec) { return Vector2D<T>(_x * vec.getX(), _y * vec.getY());};
        Vector2D &operator=(Vector2D<T> vec) { _x = vec.getX(); _y = vec.getY(); return (*this); };
        Vector2D &operator*=(T vec) { _x *= vec; _y *= vec; return (*this); };
        Vector2D &operator*=(Vector2D<T> vec) { _x *= vec.getX(); _y *= vec.getY(); return (*this); };
        Vector2D &operator+=(Vector2D<T> vec) { _x += vec.getX(); _y += vec.getY(); return (*this); };
        Vector2D &operator-=(Vector2D<T> vec) { _x -= vec.getX(); _y -= vec.getY(); return (*this); };
        bool operator==(Vector2D<T> vec) { return(_x == vec.getX() && _y == vec.getY()); };
    private:
        T _x, _y;
};

#endif /* !VECTOR_HPP_ */
