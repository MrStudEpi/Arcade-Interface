/*
** EPITECH PROJECT, 2022
** Arcade
** File description:
** Property
*/

#ifndef PROPERTY_HPP_
#define PROPERTY_HPP_

#include <string>
#include <vector>
#include <iostream>
#include <any>

class Property {
    public:
        Property(const std::string &name, std::any element) : _name(name), _elem({element}) {};
        Property(const std::string &name, std::vector<std::any> element) : _name(name) , _elem(element) {};
        Property() = default;
        ~Property() = default;

        Property &operator=(const Property &p) {
            _name = p.getName();
            _elem = p.getElements();
            return (*this);
        };

        std::vector<std::any> getElements() const { return _elem; };

        template <typename T>
        T getElement() { return (std::any_cast<T>(_elem[0])); };

        template <typename T>
        std::vector<T> getVElement() {
            std::vector<T> list;
            for (auto it = _elem.begin(); it != _elem.end(); it++)
                list.push_back(std::any_cast<T>(*it));
            return (list);
        };

        std::string getName() const { return _name; };
    protected:
    private:
        std::string _name;
        std::vector<std::any> _elem;
};

class PropertyLinker {
    public:
        PropertyLinker(const char symbol, const std::vector<Property> properties) : _symbol(symbol), _props(properties) {};
        PropertyLinker(const char symbol, const Property property) : _symbol(symbol), _props({property}) {};
        PropertyLinker() = default;

        template <typename T>
        T get(const std::string &name) {
            for (Property prop : _props)
                if (prop.getName() == name) return (prop.getElement<T>());
            throw ErrorManager("Invalid name property !");
        };

        template <typename T>
        T getOr(const std::string &name, T def) {
            try { return (get(name));
            } catch (auto &e) { return def; };
        }

        template <typename T>
        std::vector<T> getV(const std::string &name) {
            for (Property prop : _props)
                if (prop.getName() == name) return (prop.getVElement<T>());
            throw ErrorManager("Invalid name property !");
        }

        char getSymbol() const { return _symbol; }
    private:
        char _symbol;
        std::vector<Property> _props;
};

#endif /* !PROPERTY_HPP_ */
