#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InsurgencyClient.VivoxTalkerData
	 * Size -> 0x0028
	 */
	struct FVivoxTalkerData
	{
	public:
		unsigned char                                              UnknownData_6MD0[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoiceComponent*                                     RadioComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoiceComponent*                                     ProximityComponent;                                      // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP9U[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
