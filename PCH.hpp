#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif // !NOMINMAX

#define WINDOWS //delete if you want build on Linux
#ifdef WINDOWS
#include <Windows.h>
#endif // WINDOWS

#include <SFML\Graphics.hpp>
#include <vector>
#include <iostream>
#include <memory>
#define TILESIZE 32

template<typename T>
void print(T t)
{
	std::cout << t << std::endl;
}

template<typename T>
void print(std::string d, T t)
{
	std::cout << d << " " << t << std::endl;
}
