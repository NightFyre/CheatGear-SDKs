#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeTextFromName
	 */
	struct UBP_FuncLibrary_Modes_C_GetGamemodeTextFromName_Params
	{
	public:
		class FName                                                bpp__Name__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                bpp__Output__pf;                                         // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeLocalizedName
	 */
	struct UBP_FuncLibrary_Modes_C_GetGamemodeLocalizedName_Params
	{
	public:
		class FName                                                bpp__GameMode__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                bpp__Name__pf;                                           // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Modes.BP_FuncLibrary_Modes_C.GetGamemodeClassFromName
	 */
	struct UBP_FuncLibrary_Modes_C_GetGamemodeClassFromName_Params
	{
	public:
		class FName                                                bpp__Name__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFound__pf;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QJS5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              bpp__Class__pf;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
