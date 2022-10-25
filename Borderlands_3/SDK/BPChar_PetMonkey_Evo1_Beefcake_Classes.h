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
	 * BlueprintGeneratedClass BPChar_PetMonkey_Evo1_Beefcake.BPChar_PetMonkey_Evo1_Beefcake_C
	 * Size -> 0x002E (FullSize[0x2650] - InheritedSize[0x2622])
	 */
	class ABPChar_PetMonkey_Evo1_Beefcake_C : public ABPChar_PetMonkey_C
	{
	public:
		unsigned char                                              UnknownData_T0Q4[0x6];                                   // 0x2622(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2628(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_BeastMaster_Jabbermon_Poop;                           // 0x2630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PoopOn;                                                  // 0x2638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           Switch_PoopFX;                                           // 0x2640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeleeWeapon;                                             // 0x2648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility);
		void PetJabbermon_Poop_Show();
		void PetJabbermon_Poop_Hide();
		void ExecuteUbergraph_BPChar_PetMonkey_Evo1_Beefcake(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
