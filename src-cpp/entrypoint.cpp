#include "inherited.h"
#include "samplenode.h"

#include <godot_cpp/godot.hpp>
#include <godot/gdnative_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/core/class_db.hpp>


using namespace godot;


void register_example_types() {
    ClassDB::register_class<SampleNode>();
    ClassDB::register_class<Inherited>();
}


void unregister_example_types() {
}


extern "C" {

GDNativeBool GDN_EXPORT new_game_library_init(const GDNativeInterface *p_interface, const GDNativeExtensionClassLibraryPtr p_library, GDNativeInitialization *r_initialization) {
    godot::GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

    init_obj.register_scene_initializer(register_example_types);
    init_obj.register_scene_terminator(unregister_example_types);

    return init_obj.init();
}

}
