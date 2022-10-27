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
	 * BlueprintGeneratedClass ACharge_PetSpiderant.ACharge_PetSpiderant_C
	 * Size -> 0x0011 (FullSize[0x0151] - InheritedSize[0x0140])
	 */
	class UACharge_PetSpiderant_C : public UGbxAction_AICharge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0140(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            ChargeTrail;                                             // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EOakActionAbilityPetEvolutionType                          NewPetEvolutionType;                                     // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnLoop(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnHitWall(class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void Notify_Melee();
		void ExecuteUbergraph_ACharge_PetSpiderant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
