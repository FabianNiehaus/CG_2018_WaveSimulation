
OpenSG Support Libs for Windows
===============================

This directory contains a bunch of support libraries that are needed to 
compile OpenSG and programs based on OpenSG, and which are not standard on 
Windows. They are the GLUT, PNG, Jpeg, TIFF and Zlib libraries. Except for 
GLUT they are libs used for loading different image formats. A special case is 
the STLPort library, see below for details on that.

The libraries are available on the Internt under different conditions. See the 
README files in sources/ for details. For most libraries the sources are in 
that directory, in any case there are links to web pages where they can be 
obtained.

When using these for Visual Studio, make sure to include the "include" dir in 
the include pathlist (Tools->Options->Projects->VC++ Directories->Include 
Files for VS.NET, similar for VS6) and "lib" in the lib pathes (Tools-
>Options-> Projects->VC++ Directories->Library Files). 

When using them for a cygwin build just extract them to the OpenSG main 
directory and include them in the configure command.

STLPort
=======

STLPort is an open implementation of the STL Standard Template Library. Every 
compiler usually brings its own implementation, and usually you should use the 
one supplied with your compiler. But the one shipped with Visual Studio .NET 
is pretty bad, especially when used with the Microsoft compiler (with the 
Intel compiler it's quite ok (Don't try this unless you really want to patch
the Microsoft headers ;-) (GV)). Thus when using the VS.NET compiler it makes 
sense to use the STLPort instead of the shipped version.

To use it need to add the stlport directory to the BEGINNING of your include 
list. This is important to make sure that the system versions of the headers 
are not used. For Visual Studio this is all, the headers force the use of the 
correct library.

When using cygwin and configure there are special options for stlport, just 
use those the same way you use them for the other libraries.