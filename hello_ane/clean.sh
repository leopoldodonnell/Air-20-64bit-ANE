#!/bin/bash

# Build hello.framework
pushd hello.osx
xcodebuild clean
popd

rm -rf hello MacOS-x86-64 bin hello_ane.ane

