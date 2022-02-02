#include "inherited.h"
#include <godot_cpp/core/class_db.hpp>

void Inherited::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("get_vec2"), &Inherited::get_vec2);
    ClassDB::bind_method(D_METHOD("set_vec2", "val"), &Inherited::set_vec2);

    ADD_PROPERTY(PropertyInfo(Variant::VECTOR2, "vec2"), "set_vec2", "get_vec2");
}

Vector2 Inherited::get_vec2() const
{
    return vec2;
}

void Inherited::set_vec2(const Vector2 &val)
{
    vec2 = val;
}
