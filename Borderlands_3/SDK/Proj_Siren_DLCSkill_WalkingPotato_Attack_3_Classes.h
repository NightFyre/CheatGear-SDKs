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
	 * BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C
	 * Size -> 0x00C9 (FullSize[0x0A91] - InheritedSize[0x09C8])
	 */
	class AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C : public AProj_Siren_DLCSkill_WalkingPotato_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09C8(0x0008) Transient, DuplicateTransient
		class UOakTriggerComponent*                                FFYLTrigger;                                             // 0x09D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FEnvQueryParams                                     EQSFindPlayerTarget;                                     // 0x09D8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       PlayerTargetFound;                                       // 0x0A90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DamageScalar(float* res);
		void GetOrbAreaDamageType(class UClass** res);
		void UserConstructionScript();
		void OnOrbStateSending();
		void BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
