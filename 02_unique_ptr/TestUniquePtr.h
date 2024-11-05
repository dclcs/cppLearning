//
// Created by dcl on 11/4/24.
//

#ifndef TESTUNIQUEPTR_H
#define TESTUNIQUEPTR_H
#include <iostream>
#include <ostream>


/**
template<
    class T,
    class Deleter = std::default_delete<T>
> class unique_ptr;
(1)	(since C++11)
template <
    class T,
    class Deleter
> class unique_ptr<T[], Deleter>;
 *
 * std::unique_ptr is a smart pointer that owns (is responsible for)
 * and manages another object via a pointer and subsequently disposes of that object
 * when the unique_ptr goes out of scope.
 * The object is disposed of, using the associated deleter, when either of the following happens:
 *  - the managing unique_ptr object is destroyed.
 *  - the managing unique_ptr object is assigned another pointer via operator= or reset().
 *  The object is disposed of, using a potentially user-supplied deleter, by calling get_deleter()(ptr).
 *  The default deleter (std::default_delete) uses the delete operator,
 *  which destroys the object and deallocates the memory.
 *  A unique_ptr may alternatively own no object, in which case it is described as empty.
*  There are two versions of std::unique_ptr:
*   - Manages a single object (e.g., allocated with new).
*   - Manages a dynamically-allocated array of objects (e.g., allocated with new[]).
*  The class satisfies the requirements of MoveConstructible and MoveAssignable,
*  but of neither CopyConstructible nor CopyAssignable.
 */
namespace TestUniquePtr {
struct Task {
    int mId;
    Task(int id): mId(id) {
        std::cout << "Task created" << std::endl;
    }
    ~Task() {
        std::cout << "Task destroyed" << std::endl;
    }
};
class TestUniquePtr {
public:
    static void demo();
};
}



#endif //TESTUNIQUEPTR_H
