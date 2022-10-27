#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * ScriptStruct GameService.GameServiceMap
	 * Size -> 0x0070
	 */
	struct FGameServiceMap
	{
	public:
		unsigned char                                              UnknownData_0QOR[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameService.GameServiceCoordinatorUnit
	 * Size -> 0x0018
	 */
	struct FGameServiceCoordinatorUnit
	{
	public:
		class UObject*                                             Service;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6JG5[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameService.GameServiceCoordinator
	 * Size -> 0x0020
	 */
	struct FGameServiceCoordinator
	{
	public:
		TArray<struct FGameServiceCoordinatorUnit>                 Services;                                                // 0x0000(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_7ZQH[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
