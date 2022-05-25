# CMakeList.txt: проект CMake для lab2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("lab2")



# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab2 "main.cpp" "main.h" "ArraySequence.hpp" "DynamicArray.hpp" LinkedList.hpp Sequence.hpp LinkedListSequence.hpp Menu.cpp Menu.hpp "ArrSeq.cpp" "ArrSeq.hpp" "ListSeq.hpp" "ListSeq.cpp" "Test.cpp" "Test.hpp" "Complex.cpp" "Complex.hpp" "ArrSquareMatrix.hpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
