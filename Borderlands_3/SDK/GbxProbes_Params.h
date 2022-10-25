#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function GbxProbes.GbxProbesBlueprintLibrary.ResolveGbxProbeId
	 */
	struct UGbxProbesBlueprintLibrary_ResolveGbxProbeId_Params
	{
	public:
		class UObject*                                             InObj;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InTag;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxProbeId                                         OutId;                                                   // 0x0010(0x0018)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.MakeProbeId
	 */
	struct UGbxProbesBlueprintLibrary_MakeProbeId_Params
	{
	public:
		class FString                                              Class;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Type;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SubType;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxProbeId                                         OutId;                                                   // 0x0030(0x0018)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.IsValidId
	 */
	struct UGbxProbesBlueprintLibrary_IsValidId_Params
	{
	public:
		struct FGbxProbeId                                         ProbeId;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsValid;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.IsTestProbeEnabled
	 */
	struct UGbxProbesBlueprintLibrary_IsTestProbeEnabled_Params
	{
	public:
		struct FGbxProbeId                                         ProbeId;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Test;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsEnabled;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.IsTestEnabled
	 */
	struct UGbxProbesBlueprintLibrary_IsTestEnabled_Params
	{
	public:
		class FName                                                Test;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsEnabled;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.IsClassEnabled
	 */
	struct UGbxProbesBlueprintLibrary_IsClassEnabled_Params
	{
	public:
		class FName                                                Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsEnabled;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.FlushPendingTestProbes
	 */
	struct UGbxProbesBlueprintLibrary_FlushPendingTestProbes_Params
	{	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResultWithData
	 */
	struct UGbxProbesBlueprintLibrary_EmitTestProbeResultWithData_Params
	{
	public:
		struct FGbxProbeId                                         ProbeId;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Test;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxProbeResult                                            Result;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PBI5[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGbxProbeExtraData>                          ExtraDataArray;                                          // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResult
	 */
	struct UGbxProbesBlueprintLibrary_EmitTestProbeResult_Params
	{
	public:
		struct FGbxProbeId                                         ProbeId;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Test;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxProbeResult                                            Result;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YAQX[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ExtraData;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
