# NOTICE
Due to recent abuse of both Issues and Pull Requests, I have decided to disable any form of collaboration with this repository.  
If you have something meaningful you would like to contribute, feel free to reach out to me.

# SDK Initialization
- Copy SDK folder and header to project folder

**Include the following files to the project via Solution Panel**
```md
- SDK.h
- BasicTypes_Packages.cpp
- CoreUObject_Package.cpp
- Engine_Package.cpp
```
##

Attempting to build any of the SDK's will result in 51 errors  
// Most errors can be attributed to the following
```md
- undefined class : UMulticastSparseDelegate
- undefined struct : FWebInterfaceCallback
- Syntax error : 'UCanvas'
- syntax error : 'TUObjectArray'
- syntax error : 'constant' (HttpLibrary_Struct.h : Enum Class {4} DELETE)
- 'GObjects' : undeclared identifier
- 'RowMap' : undeclared identifier
- 'CG' : is not a class or namespace name
```

# Fix Compile Errors
**ERROR**: `undefined class : UMulticastSparseDelegate`  
**FILE**: `CoreUObjectClasses.h`  
```c++
class UMulticastSparseDelegate
{
    unsigned __int8 Pad[0x1];
};
```
##

**ERROR**: `undefined struct : FWebInterfaceCallback`  
**FILE**: ~  
- Comment all instances of the reference  
##

**ERROR**: `Syntax error : 'UCanvas'`  
**FILE**: `Engine_Classes.h`  
- Comment out the function declaration
##

**ERROR**: 'RowMap' : undeclared identifier  
**FILE**: `Engine_Classes.h`  
- Comment out the function template included
##

**ERROR**: `syntax error : 'constant' (HttpLibrary_Struct.h : Enum Class {4} DELETE)`  
**FILE**: ~  
- Rename `DELETE` to `DELETE_A`