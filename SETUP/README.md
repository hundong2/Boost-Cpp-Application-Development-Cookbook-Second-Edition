# Setup boost enviroment for MACOS

## boost & cmake  install using homebrew   

```sh
brew install boost
brew install cmake
```

## check main.cpp and cmake file 

```sh

```

## execute CMAKE 

```sh
cmake -DCMAKE_BUILD_TYPE=debug .
```

## reference 

- https://object-world.tistory.com/9

## install GCC for MACOS

- https://hpc.sourceforge.net/index.php


Compiled using source code from the GNU servers. This contains current versions (8.3 is the stable release) of gfortran (free, open source, GNU Fortran 95 compiler), gcc (GNU C) and g++ (GNU C++) compilers that can perform auto-vectorization (i.e. modify code to take advantage of AltiVec/SSE, automatically) and other sophisticated optimizations like OpenMP. For more information, see this webpage. Download my binaries, and cd to the download folder. Then gunzip gcc-13-m1-bin.tar.gz (if your browser didn't do so already) and then sudo tar -xvf gcc-13-m1-bin.tar -C /. It installs everything in /usr/local. You can invoke the Fortran 95 compiler by simply typing gfortran. You will also need to have Apple's XCode Tools installed from the Mac App Store. With XCode 4 or better you will need to download the command-line tools as an additional step. You will find the option to download the command-line tools in XCode's Preferences. On 10.9 Mavericks or higher, you can get the command-line tools by simply typing xcode-select --install. And on Catalina, you may have to specify an additional include and library path -I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include -L/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/lib for the compiler to find the system headers and libraries.
