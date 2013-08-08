//
//  insert_method.h
//  mysync
//
//  Created by Mario Mueller on 08.08.13.
//
//

#ifndef __mysync__insert_method__
#define __mysync__insert_method__

#include <iostream>
#include "method_proxy.h"

namespace MySync {
    class InsertMethod : public MethodProxy {
        std::string getMethodName();
        std::string generateStatement(const std::vector<std::string> values);
    };
}
#endif /* defined(__mysync__insert_method__) */