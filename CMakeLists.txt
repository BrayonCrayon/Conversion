cmake_minimum_required(VERSION 3.10)
project(Conversion VERSION 1.0.0 LANGUAGES CXX)

set(DIR /src)
set(HEADER_FILES ${PROJECT_SOURCE_DIR}/include/Measurement.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Unit.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Gram.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Ounce.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Pound.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Kilogram.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Ton.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/ShortTon.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/LongTon.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Mg.hpp
        ${PROJECT_SOURCE_DIR}/include/Units/Stone.hpp
        )
set(SOURCES
        ${PROJECT_SOURCE_DIR}/src/Measurement.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/Gram.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/Ounce.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/Pound.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/Kilogram.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/Ton.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/ShortTon.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/LongTon.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/Mg.cpp
        ${PROJECT_SOURCE_DIR}/src/Units/Stone.cpp

        ${HEADER_FILES})
add_executable(ConversionExe ${PROJECT_SOURCE_DIR}/src/Conversion.cpp ${SOURCES})

add_library(measurement src/Conversion.cpp ${HEADER_FILES})
target_include_directories(measurement PRIVATE ${DIR})
target_include_directories(ConversionExe PRIVATE ${DIR})
