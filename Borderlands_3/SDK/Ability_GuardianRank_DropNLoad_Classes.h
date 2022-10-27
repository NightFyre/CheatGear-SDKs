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
	 * BlueprintGeneratedClass Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C
	 * Size -> 0x0048 (FullSize[0x01F8] - InheritedSize[0x01B0])
	 */
	class UAbility_GuardianRank_DropNLoad_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		class UFightForYourLifeComponent*                          myFFYLComponent;                                         // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_GuardianRank_DropNLoad; // 0x01C0(0x0028)
		TArray<class UInventorySlotData*>                          SlotsToIterate;                                          // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void OnActivated();
		void OnDeactivated();
		void OnDownStateStart();
		void ExecuteUbergraph_Ability_GuardianRank_DropNLoad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
