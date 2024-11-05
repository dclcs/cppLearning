//
// Created by dcl on 11/4/24.
//

#ifndef TESTEXPLICIT_H
#define TESTEXPLICIT_H
#include <iostream>
#include <ostream>
#include <string>

/**
* 1) Specifies that a constructor or conversion function(since C++11)
*    or deduction guide(since C++17) is explicit, that is,
*    it cannot be used for implicit conversions and copy-initialization.
* 2) The explicit specifier may be used with a constant expression.
*    The function is explicit if and only if that constant expression evaluates to true.
 */
namespace  TestExplicit {

class Book {
public:
 Book() {};
 explicit Book(const std::string name, const int price = 100): _name(name), _price(price) {
  std::cout << "Book constructor" << std::endl;
 };

 void isSameBook(const Book& book) {
  if (_name == book._name)
   std::cout << "same names" << std::endl;
  else
   std::cout << "different names" << std::endl;
 }

private:
 std::string _name;
 int _price;
};
class TestExplicit {
public:
 static void demo();
};

};



#endif //TESTEXPLICIT_H
