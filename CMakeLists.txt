cmake_minimum_required(VERSION 3.13)
project(DeathCheck)

find_package(Geode REQUIRED)

add_geode_mod(
    mauflaco.deathcheck
    SOURCES Main.cpp
)
