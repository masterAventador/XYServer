from conan import ConanFile
from conan.tools.cmake import cmake_layout

class CppServerRecipe(ConanFile):
    settings = "os", "compiler","build_type","arch"
    generators = "CMakeToolchain","CMakeDeps"

    def requirements(self):
        self.requires("boost/1.85.0")
        self.requires("protobuf/5.27.0")

    # def build_requirements(self):
    #     self.tool_requires("cmake/3.22.6")

    def layout(self):
        cmake_layout(self)
