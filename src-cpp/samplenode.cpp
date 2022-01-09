#include "samplenode.h"
#include <godot_cpp/variant/utility_functions.hpp>

void SampleNode::_bind_methods()
{
}

void SampleNode::_ready()
{
    UtilityFunctions::print("mada faka");
}
