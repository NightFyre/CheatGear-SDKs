# Game-SDKs SETUP GUIDE

**SDK Initialization**
- Copy SDK folder and header to project
```cpp
// Init SDK Function
// This is just testing to see if the object can be referenced
void InitSDK()
{
   CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(dwGameBase+ g_GameData->offsets.GObjects);
}
```

1st Attempt to build results in 51 Errors
// Most errors can be attributed to the following
```md
- undefined class : UMulticastSparseDelegate
- undefined struct : FWebInterfaceCallback
- Syntax error : 'UCanvas'
- syntax error : 'TUObjectArray'
- syntac errpr : 'constant' (HttpLibrary_Struct.h : Enum Class {4} DELETE)
- 'GObjects' : undeclared identifier
- 'RowMap' : undeclared identifier
- 'CG' : is not a class or namespace name
```

**CLEAN AND ERROR MANAGEMENT**

Error: `undefined class : UMulticastSparseDelegate`
Solution: `CoreUObjectClasses.h`
```c++
class UMulticastSparseDelegate
{
    unsigned __int8 Pad[0x1];
};
```
----

Error: `undefined struct : FWebInterfaceCallback`
Solution: Comment all instances of the reference
---

Error: `Syntax error : 'UCanvas'`
Solution: 'Engine_Classes.h'
- Comment out the function declaration
---

Error: 'RowMap' : undeclared identifier
Solution: `Engine_Classes.h`
- Comment out the function template included

Error: syntax error : 'constant' (HttpLibrary_Struct.h : Enum Class {4} DELETE)
Solution: Rename `DELETE` to `DELETE_A`
---


**ATTEMPT REBUILD**
```md
- syntax error : 'TUObjectArray'
- 'GObjects' : undeclared identifier
- 'RowMap' : undeclared identifier
- 'CG' : is not a class or namespace name
```

**Include The Following Files to the Project**
- BasicTypes_Packages.cpp
- CoreUObject_Package.cpp
- Engine_Package.cpp
