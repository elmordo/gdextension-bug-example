#pragma once
#include "samplenode.h"


class Inherited : public SampleNode
{
    GDCLASS(Inherited, SampleNode);

    Vector2 vec2;
protected:
    static void _bind_methods();
public:

    Vector2 get_vec2() const;

    void set_vec2(const Vector2 &val);
};

