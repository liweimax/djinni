// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "item_list.hpp"

namespace textsort {

class TextboxListener {
public:
    virtual ~TextboxListener() {}

    virtual void update(const ::ItemList & items) = 0;
};

}  // namespace textsort
