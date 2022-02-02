#ifndef SAMPLENODE_H
#define SAMPLENODE_H


#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

class SampleNode : public Node2D
{

    GDCLASS(SampleNode, Node2D);

    Vector2 vec;
protected:

    static void _bind_methods();

public:

    Vector2 get_vec() const;

    void set_vec(const Vector2& val);
};

#endif // SAMPLENODE_H
