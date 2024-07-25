from conan import ConanFile
from conan.tools.cmake import cmake_layout

class CppServerRecipe(ConanFile):
    settings = "os", "compiler","build_type","arch"
    generators = "CMakeToolchain","CMakeDeps"

    def requirements(self):
        self.requires("boost/1.85.0")
        self.requires("protobuf/5.27.0")
        self.requires("libpqxx/7.9.1")

    # def build_requirements(self):
    #     self.tool_requires("cmake/3.22.6")

    def layout(self):
        cmake_layout(self)
