//: C03:FileStatic2.cpp {O}
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Trying to reference fs

extern int fs;  // 在FileStatic.cpp中， fs被申明为static，不能在其外的文件被访问。这里编译时将报错
void func() {
    fs = 100;
} ///:~