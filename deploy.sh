
# Why do we separate the git pull and build script into two different files?
# Because we may change the build script in any commit. Once we do that, it won't work correctly.
# After the first time we execute the git pull command, all script content is loaded into memory.
# Even if we pull the new script, it doesn't change the already loaded content.

git pull

sh release_build.sh