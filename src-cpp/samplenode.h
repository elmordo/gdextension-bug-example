#ifndef SAMPLENODE_H
#define SAMPLENODE_H


#include <node.hpp>
#include <godot.hpp>
#include <control.hpp>

using namespace godot;

class SampleNode : public Node
{

    GDCLASS(SampleNode, Node);

protected:

    static void _bind_methods();

public:
};

#endif // SAMPLENODE_H
