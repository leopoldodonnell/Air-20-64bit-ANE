#!/bin/bash

# Setup PATH to point to the newly overlayed AIR20 binaries
export PATH="/Applications/Adobe Flash Builder 4.7/sdks/4.15.0/bin":${PATH}

# Build hello.framework
pushd hello.osx
xcodebuild -configuration Debug
popd

mkdir -p MacOS-x86-64
cp -r hello.osx/build/Debug/hello.framework MacOS-x86-64/

# Compile the swc
acompc -source-path flex -include-classes com.pvue.Hello -swf-version=20 -output bin/hello_ane.swc

# extract library.swf from the swc to include in the extention environment
unzip bin/hello_ane.swc library.swf
mv library.swf MacOS-x86-64

adt -package -target ane hello_ane.ane extension.xml -swc bin/hello_ane.swc -platform MacOS-x86-64 \
  -C MacOS-x86-64 hello.framework library.swf
