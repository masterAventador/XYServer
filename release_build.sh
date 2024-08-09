
build_script_path=build/Release/generators
cmake_cache_path=build/Release
bin_path=linux_bin
server_address=root@8.140.207.230

conan profile detect --name=ubuntu
conan install . --build=missing -s build_type=Release --profile=ubuntu

source $build_script_path/conanbuild.sh

cmake -DCMAKE_BUILD_TYPE=Release -DEXECUTABLE_OUTPUT_PATH=$bin_path --preset conan-release
cmake --build $cmake_cache_path

source $build_script_path/deactivate_conanbuild.sh

ssh $server_address 'pkill XYServer'

scp ./linux_bin/XYServer $server_address:/root/deploy/

ssh $server_address 'cd deploy; rm -f output.log; nohup ./XYServer > output.log 2>&1 & '

echo 'Server has been started...😋'
