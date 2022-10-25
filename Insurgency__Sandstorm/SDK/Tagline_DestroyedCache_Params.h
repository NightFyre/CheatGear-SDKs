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
	 * Function Tagline_DestroyedCache.Tagline_DestroyedCache_C.On Objective Destroyed
	 */
	struct UTagline_DestroyedCache_C_On_Objective_Destroyed_Params
	{
	public:
		class AObjectiveDestructible*                              bpp__Objective__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__OldOwners__pf;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__NewOwners__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5OEV[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AINSPlayerState*>                             bpp__Attackers__pf__const;                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tagline_DestroyedCache.Tagline_DestroyedCache_C.BlueprintInit
	 */
	struct UTagline_DestroyedCache_C_BlueprintInit_Params
	{
	public:
		class AINSGameMode*                                        bpp__GameMode__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Tagline_DestroyedCache.Tagline_DestroyedCache_C.ObjectiveDestroyedEventDelegate__DelegateSignature
	 */
	struct UTagline_DestroyedCache_C_ObjectiveDestroyedEventDelegate__DelegateSignature_Params
	{
	public:
		class AObjectiveDestructible*                              bpp__Objective__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__OldOwners__pf;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__NewOwners__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DISA[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AINSPlayerState*>                             bpp__Attackers__pf;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
