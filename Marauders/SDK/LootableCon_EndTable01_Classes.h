#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass LootableCon_EndTable01.LootableCon_EndTable01_C
	 * Size -> 0x000C (FullSize[0x04D0] - InheritedSize[0x04C4])
	 */
	class ALootableCon_EndTable01_C : public ASIGIS_BaseLootableContainer_C
	{
	public:
		unsigned char                                              UnknownData_3V2J[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                End_Table_4_Drawer;                                      // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
