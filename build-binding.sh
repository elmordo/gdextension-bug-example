#/bin/bash

godot --dump-extension-api
mv extension_api.json api.json
cd lib/godot-cpp
use_custom_api_file=yes custom_api_file=../../api.json scons platform=linux generate_bindings=yes -j8 use_llvm=yes use_lld=yes
