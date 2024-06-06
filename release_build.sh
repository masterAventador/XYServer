rm -r build
conan profile detect --force
conan install . --build=missing -s build_type=Release

cmake -DCMAKE_BUILD_TYPE=Release --preset conan-release
cmake --build build/Release --config Release -j10

pkill CppServer

echo 'Starting the Server now !~!~'

nohup ./bin/CppServer > output.log 2>&1 &