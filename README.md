Adaptive Huffman CS3302-DE                                           {#mainpage}
===========================

**Author:** 140013444

**Marker:** Tom Kelsey

**Date:** 7th October 2016

Quick Start
-----
``` sh
	$ echo -n "hello world" | ./huff -e | ./huff -d
	>> hello world
```
 
Specification
-------------
This application was written as a solution for Practical 1 of module CS3302-DE at the University of St Andrews.
The stated purpose of the pratical was to gain experience with a widely used compression algorithm.

The specification was as follows:

- Implement an Adaptive Huffman encoder (persistant tree is optional)
- Implement an Adaptive Huffman decoder (decoder optional)

Choosing not to implement any of the optional parts of the specification would limit the maximum grade to a 16.
Choosing not to implement both optional parts of the specification would limit the maximum grade to a 13.

It was specified that any reasonable adaptive algorithm could be implemented.

It was also stated that the preferred implementation language was Java and that C++, C and Python are also acceptable.

Architecture
------------

### Tooling Overview
Although the preferred language was Java, C++ was chosen for several reasons. 
These are listed in approximately descending order of priority:

**Personal Growth:**
JH Team Project was democratically decided to be written in C++. 
As I have never previously had the opportunity to learn the language, this project seemed ideal for gaining some foundational experience.

**Simplicity:**
Reading and writing to binary files and streams is abstracted over in the Java standard library. 
While this is useful for most purposes, productive use of these abstractions requires a familiarity with the standard library that I do not currently possess. 
C++, however, uses C primitives with which I have had previous experience.

**Performance:**
C++ is generally a more performant langauge and should therefore allow for faster compression speeds.

**Tooling**
Thanks to JH project preparation, I have become familiar with the wide variety of high quality C++ tools available.

A brief summary of tools used follows:

- **Build Tool:** CMake
- **Testing:** GoogleTest
- **Continuous Integration:** Travis CI
- **Documentation:** Doxygen

### Usage Instructions
-----
``` sh
	$ huff --help

```
 


### Build

### Test

### Usage
 

Testing
-------

Evaluation
----------
 
 
 