﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass MatchHistoryRowData.MatchHistoryRowData_C
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UMatchHistoryRowData_C : public UObject
	{
	public:
		struct FMatchHistoryEntry                                  Data;                                                    // 0x0028(0x00B0) Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
