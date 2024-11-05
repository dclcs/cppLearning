//
// Created by dcl on 11/4/24.
//

#include "TestUniquePtr.h"

void TestUniquePtr::TestUniquePtr::demo() {
    std::unique_ptr<Task> taskPtr(new Task(23));
    int id = taskPtr->mId;
    std::cout << "id: " << id << std::endl;
}
