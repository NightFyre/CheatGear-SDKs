#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BPFirstPersonConfig_Gunner.BPFirstPersonConfig_Gunner_C
	 * Size -> 0x0020 (FullSize[0x0498] - InheritedSize[0x0478])
	 */
	class ABPFirstPersonConfig_Gunner_C : public ABPFirstPersonConfig_Player_C
	{
	public:
		class UParticleSystemComponent*                            DeviceHologram1st;                                       // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DLCActionSkillDevice1st;                                 // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyAccessoryComponent*                            FoleyAccessory_R_Hand_Audio;                             // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyAccessoryComponent*                            FoleyAccessory_L_Hand_Audio;                             // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
