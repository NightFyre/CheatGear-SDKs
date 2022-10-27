# CheatGear-SDKs

I'm not waiting 7 days to use a product I pay for. I have been a patron member and also donated via paypal. This is very scummy way to treat an honest customer. The sad part is I even told Corrm that CheatGear would not work on VirtualMachine as I was trying to dump something that may not have been safe on my main machine. Never was it made aware to me that this changed my hwid and even so , whats stopping anybody from doing exactly what I am doing now? I can ask any of my friends to dump a game for me just the same way I could press the dump button if I was not getting hwid errors. 

Really weird hill to die on. The way you treated me is shitty at best. I've held my tongue on most of your other behaviors but this was my last straw.

This Repository shall remain public until my paid subscription is restored. Additionally I will be including more games to this list as time goes on. 

Issues are closed, There is a tutorial below on how to utilize the sdks.  

These are for INTERNAL use.  

# "Open a Ticket"
![image](https://user-images.githubusercontent.com/80198020/197829417-ae70ee70-328b-42d2-a7a1-b6d2a715b078.png)

# lets trash talk our customers
![image](https://user-images.githubusercontent.com/80198020/197829563-ca9a3034-3aff-47a9-a9ee-ffcb501ec3f1.png)

# SETUP GUIDE
**Cheat Gear SDK Initialization**
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

Error: syntac errpr : 'constant' (HttpLibrary_Struct.h : Enum Class {4} DELETE)
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