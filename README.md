# Reproduction instruction
1. Update gitsubmodules for vcpkg
2. Run "bootstrap-vcpkg.bat" in vcpkg directory
3. Run "vcpkg install qt5-base:x64-windows"
4. Add vcpkg\installed\x64-windows\tools\qt5\debug\bin to PATH so that meson find Qt5 installation with qmake
5. Add vcpkg\installed\x64-windows\debug\bin to PATH so that Qt DLLs are found
6. Create build directory "meson build"
7. Build "meson compile -C build"
8. Run main.exe. The executable will crash.
