#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum HDCoreUGC.EHDCoreUGCTargetState
	 */
	enum class EHDCoreUGCTargetState : uint8_t
	{
		Installed  = 0,
		Registered = 1,
		Loaded     = 2,
		Active     = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HDCoreUGC.HDCoreUGCPluginStateMachineProperties
	 * Size -> 0x00A8
	 */
	struct FHDCoreUGCPluginStateMachineProperties
	{
	public:
		unsigned char                                              UnknownData_Z0ZX[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHDCoreUGCData*                                      UGCData;                                                 // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1O6[0x50];                                  // 0x0058(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HDCoreUGC.UGCPrimaryAssetSearchInfo
	 * Size -> 0x0018
	 */
	struct FUGCPrimaryAssetSearchInfo
	{
	public:
		struct FPrimaryAssetType                                   AssetType;                                               // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Directory;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
