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
	 * BlueprintGeneratedClass BP_ShieldBoosterPickup_Fortify.BP_ShieldBoosterPickup_Fortify_C
	 * Size -> 0x0008 (FullSize[0x04F0] - InheritedSize[0x04E8])
	 */
	class ABP_ShieldBoosterPickup_Fortify_C : public AShieldChargeInventoryPickup
	{
	public:
		class AOakCharacter_Player*                                PickerUpper;                                             // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
