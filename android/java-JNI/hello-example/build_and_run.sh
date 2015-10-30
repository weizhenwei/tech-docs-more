#/bin/bash

javac HelloWorld.java
javah -jni HelloWorld

g++ -I/System/Library/Frameworks/JavaVM.framework/Versions/Current/Headers/ -c HelloWorld.cpp
g++ -dynamiclib -o libHelloWorld.jnilib HelloWorld.o

java HelloWorld

