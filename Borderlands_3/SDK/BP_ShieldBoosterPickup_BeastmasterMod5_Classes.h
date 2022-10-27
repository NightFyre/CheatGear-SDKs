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
	 * BlueprintGeneratedClass BP_ShieldBoosterPickup_BeastmasterMod5.BP_ShieldBoosterPickup_BeastmasterMod5_C
	 * Size -> 0x0010 (FullSize[0x04E0] - InheritedSize[0x04D0])
	 */
	class ABP_ShieldBoosterPickup_BeastmasterMod5_C : public AShieldBoosterNonAugment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D0(0x0008) Transient, DuplicateTransient
		class AOakCharacter_Player*                                PickerUpper;                                             // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void PickedUp(class AOakCharacter* PickupInstigator);
		void ExecuteUbergraph_BP_ShieldBoosterPickup_BeastmasterMod5(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
