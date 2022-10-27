#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Pouch_Ammo_AR_15_x2.BP_Pouch_Ammo_AR-15_x2_C
	 * Size -> 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
	 */
	class ABP_Pouch_Ammo_AR__x2_C : public AGBPouch
	{
	public:
		class UStaticMeshComponent*                                S_Mag1;                                                  // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                S_Mag;                                                   // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
