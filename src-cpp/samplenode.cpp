#include "samplenode.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

void SampleNode::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("get_vec"), &SampleNode::get_vec);
    ClassDB::bind_method(D_METHOD("set_vec", "val"), &SampleNode::set_vec);

    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "vec"), "set_vec", "get_vec");
}

Vector2 SampleNode::get_vec() const
{
    return vec;
}

void SampleNode::set_vec(const Vector2 &val)
{
    vec = val;
}
