# hello with Adobe Air 20 - Mac OS 64-bit

***As of January 2016, the following very simple ANE for Adobe Air 20.0 and OSX, builds but does not work. This project
is a plea to anyone who can suggest a way to get it working (outside of using a captive Adobe Air 19 runtime).*** Feel free
to use *Issues* to suggest fixes that could get this up on its feet as an example to the many of us who are stuck.

This ANE has a simple enough setup where the ANE has a single entry point 'say_hi' that should return a string. The accompanying flex
application provides a few controls that access the ANE and updates a Label with the result, if successful, or the error
if unsuccessful.

## Layout

* The root directory contains the Flex Project
* `hello_ane` contains the source for building hello_ane.ane
* `hello_ane/hello.osx` contains the Xcode project for the `hello.framework`
* `hello_ane/flex` contains the ActionScript classes for the ANE

## Preparation

Before building this application the following is expected:

1. You have OS X 10.9 or greater
1. You have installed XCode 6.3 and have the command line tools installed as well
1. You have Adobe Flash Builder 4.7 installed in /Applications
1. You have Downloaded the Adobe Air SDK  for Mac (we used version 20.0.0.233) from [here](http://www.adobe.com/devnet/air/air-sdk-download.html)
1. You have also downloaded the Air SDK without new compiler for Mac [here](http://airdownload.adobe.com/air/mac/download/latest/AdobeAIRSDK.tbz2)
1. You have installed both into your Flash Builder with instructions [here](https://helpx.adobe.com/flash-builder/kb/overlay-air-sdk-flash-builder.html)
but note to use 20.0 in your application descriptor.

## Building and Running

To build and run, you'll need to first build the ANE using a Bash shell script, then load up the Flex project and run.

### Build the ANE

Starting inside the project root directory, begin by building the ANE, `hello_ane.ane`.

```bash
> cd hello_ane
> ./build.sh
> cd ..
```

You should see output like this:

```bash
{your_path}/helloANE/hello_ane/hello.osx
~/Dropbox/dev/flex/screenshot/helloANE/hello_ane/hello.osx ~/Dropbox/dev/flex/screenshot/helloANE/hello_ane
=== BUILD TARGET hello OF PROJECT hello WITH CONFIGURATION Debug ===

Check dependencies

CompileC {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/Objects-normal/x86_64/hello_ane.o hello_ane.cpp normal x86_64 c++ com.apple.compilers.llvm.clang.1_0.compiler
    cd {your_path}/helloANE/hello_ane/hello.osx
    export LANG=en_US.US-ASCII
    /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang -x c++ -arch x86_64 -fmessage-length=116 -fdiagnostics-show-note-include-stack -fmacro-backtrace-limit=0 -fcolor-diagnostics -std=gnu++11 -stdlib=libc++ -fmodules -fmodules-prune-interval=86400 -fmodules-prune-after=345600 -fbuild-session-file=/var/folders/mt/07p9mh7d581dmctpv4brd8fwl80ys6/C/org.llvm.clang/ModuleCache/Session.modulevalidation -fmodules-validate-once-per-build-session -Wnon-modular-include-in-framework-module -Werror=non-modular-include-in-framework-module -Xclang -fmodule-implementation-of -Xclang hello -Wno-trigraphs -fpascal-strings -O0 -fno-common -Wno-missing-field-initializers -Wno-missing-prototypes -Werror=return-type -Wunreachable-code -Werror=deprecated-objc-isa-usage -Werror=objc-root-class -Wno-non-virtual-dtor -Wno-overloaded-virtual -Wno-exit-time-destructors -Wno-missing-braces -Wparentheses -Wswitch -Wunused-function -Wno-unused-label -Wno-unused-parameter -Wunused-variable -Wunused-value -Wempty-body -Wconditional-uninitialized -Wno-unknown-pragmas -Wno-shadow -Wno-four-char-constants -Wno-conversion -Wconstant-conversion -Wint-conversion -Wbool-conversion -Wenum-conversion -Wshorten-64-to-32 -Wno-newline-eof -Wno-c++11-extensions -DDEBUG=1 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk -fasm-blocks -fstrict-aliasing -Wdeprecated-declarations -Winvalid-offsetof -mmacosx-version-min=10.10 -g -fvisibility-inlines-hidden -Wno-sign-conversion -iquote {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/hello-generated-files.hmap -I{your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/hello-own-target-headers.hmap -I{your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/hello-all-non-framework-target-headers.hmap -ivfsoverlay {your_path}/helloANE/hello_ane/hello/build/hello.build/all-product-headers.yaml -iquote {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/hello-project-headers.hmap -I{your_path}/helloANE/hello_ane/hello/build/Debug/include -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include -I{your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/DerivedSources/x86_64 -I{your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/DerivedSources -F{your_path}/helloANE/hello_ane/hello/build/Debug -F/Applications/Adobe\ Flash\ Builder\ 4.7/sdks/4.6.0/runtimes/air/mac -MMD -MT dependencies -MF {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/Objects-normal/x86_64/hello_ane.d --serialize-diagnostics {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/Objects-normal/x86_64/hello_ane.dia -c {your_path}/helloANE/hello_ane/hello.osx/hello_ane.cpp -o {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/Objects-normal/x86_64/hello_ane.o

Ld {your_path}/helloANE/hello_ane/hello/build/Debug/hello.framework/Versions/A/hello normal x86_64
    cd {your_path}/helloANE/hello_ane/hello.osx
    export MACOSX_DEPLOYMENT_TARGET=10.10
    /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ -arch x86_64 -dynamiclib -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk -L{your_path}/helloANE/hello_ane/hello/build/Debug -L/Applications/Adobe\ Flash\ Builder\ 4.7/sdks/4.6.0/runtimes/air/mac -F{your_path}/helloANE/hello_ane/hello/build/Debug -F/Applications/Adobe\ Flash\ Builder\ 4.7/sdks/4.6.0/runtimes/air/mac -filelist {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/Objects-normal/x86_64/hello.LinkFileList -install_name @rpath/hello.framework/Versions/A/hello -Xlinker -rpath -Xlinker @executable_path/../Frameworks -Xlinker -rpath -Xlinker @loader_path/Frameworks -mmacosx-version-min=10.10 -stdlib=libc++ /Applications/Adobe\ Flash\ Builder\ 4.7/sdks/4.6.0/runtimes/air/mac/Adobe\ AIR.framework/Versions/1.0/Adobe\ AIR_64 -framework Adobe\ AIR -framework Cocoa -single_module -compatibility_version 1 -current_version 1 -Xlinker -dependency_info -Xlinker {your_path}/helloANE/hello_ane/hello/build/hello.build/Debug/hello.build/Objects-normal/x86_64/hello_dependency_info.dat -o {your_path}/helloANE/hello_ane/hello/build/Debug/hello.framework/Versions/A/hello

Touch {your_path}/helloANE/hello_ane/hello/build/Debug/hello.framework
    cd {your_path}/helloANE/hello_ane/hello.osx
    /usr/bin/touch -c {your_path}/helloANE/hello_ane/hello/build/Debug/hello.framework

** BUILD SUCCEEDED **

~/Dropbox/dev/flex/screenshot/helloANE/hello_ane
cp: hello.osx/build/Debug/hello.framework/Modules: No such file or directory
Loading configuration file /Applications/Adobe Flash Builder 4.7/sdks/4.6.0/frameworks/air-config.xml
{your_path}/helloANE/hello_ane/bin/hello_ane.swc (2074 bytes)
Archive:  bin/hello_ane.swc
  inflating: library.swf
```

### Build and Run the Flash Builder Project

The following should load the project with all of the appropriate settings for the ANE

1. Start Flash Builder 4.7
1. Import the project: File>Import Flash Builder Project
1. Select the Project Folder Option and select the root folder as the project

Next setup a debug session from Run>Debug Configurations and begin the debug session

First you'll see a Native Extension Error with the following:

```
There are packaging errors/warnings. Check Flex Build Packaging page for the build target and launch
target association.

Platform    : Air - Desktop
Build target: default
Launching on : default

Would you like to continue?
```

Click on `OK`

This will launch a window with a button and a Label. Click the button and you should see a positive string in the Label
for success, but you'll see the following: 

    Error #3500: The extension context does not have a method with the name say_hi

