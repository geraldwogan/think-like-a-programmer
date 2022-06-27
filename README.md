# think-like-a-programmer

"Think Like a Programmer" is a book designed to teach problem-solving. I am always looking to improve that particular skill. So, I thought I would give it a go!

The book includes samples exercises and problems to solve using C++. Let's get that setup.

## Setup for C++ in vscode (https://code.visualstudio.com/docs/languages/cpp) + (https://code.visualstudio.com/docs/cpp/config-mingw) + (https://www.msys2.org/) + (https://stackoverflow.com/a/69368703)

- Install MYSYS2
    - Directory -> C:/mysys64
    - 'Next' and 'OK' to everything.
    - Within MSYS2 MSYS, run:
        - pacman -Syu
        - pacman -Syu
        - pacman -S --needed base-devel mingw-w64-x86_64-toolchain
    - Test installation (in a newly opened command prompt) by running: 
        - gcc --version (12.1.0)
        - g++ --version
        - gdb --version
    - Manually check that your Ming-w64 bin folder ('C:\msys64\mingw64\bin') has the required .exe files -> [g++.exe, gcc.exe, gdb.exe]
    - Add the path to your Mingw-w64 bin folder ('C:\msys64\mingw64\bin') to the Windows PATH environment variable.
        - Search for 'edit environment variables for your account'
        - Click 'Edit' under User Variables
        - Click 'New'
        - Add 'C:\msys64\mingw64\bin'
- Install vscode extensions
    - Code Runner (Jun Han)
    - C/C++ (Microsoft)

At this point, write a basic hello world file, like below:
 
``` c++
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    cout << endl
    return 0;
}
```
A 'Play' button should appear in the top right of vscode that will print 'Hello World! in the console.
 
Setup complete!