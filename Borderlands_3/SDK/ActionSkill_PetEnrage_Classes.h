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
	 * BlueprintGeneratedClass ActionSkill_PetEnrage.ActionSkill_PetEnrage_C
	 * Size -> 0x0009 (FullSize[0x0271] - InheritedSize[0x0268])
	 */
	class UActionSkill_PetEnrage_C : public UOakActionAbility_HulkOut
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) Transient, DuplicateTransient
		bool                                                       bHasValidSpawnLocation;                                  // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool ShouldStopAbilityOnPawnSlotComponentAttach();
		EGbxAbilityState CalculateAbilityState();
		void GetActionRegisters(const struct FVector& InLocation, TArray<struct FGbxActionRegister>* res);
		float GetCooldownRestartPercent();
		bool GetMaxCooldownModifier(EGbxAttributeModifierType* ModifierType, float* Value);
		void GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result);
		void GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result);
		void OnStartActionAbility();
		void FindTargetLocationAsync();
		void LocationQueryComplete(const struct FVector& TargetLocation);
		void OnStopActionAbility();
		void ExecuteUbergraph_ActionSkill_PetEnrage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
