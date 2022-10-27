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
	 * BlueprintGeneratedClass BP_Holster_Handgun.BP_Holster_Handgun_C
	 * Size -> 0x0008 (FullSize[0x0420] - InheritedSize[0x0418])
	 */
	class ABP_Holster_Handgun_C : public AGBHolster
	{
	public:
		class UStaticMeshComponent*                                Holster;                                                 // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
