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
	 * BlueprintGeneratedClass PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C
	 * Size -> 0x0038 (FullSize[0x01E8] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Gunner_StainlessSteelBear_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_StainlessSteelBear; // 0x01B8(0x0028)
		class AOakCharacter_IronBear*                              CurrentIronBear;                                         // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void StainlessSteelBear_AutoBearStarted();
		void StainlessSteelBear_IronBearEnteredAndReady(class AOakCharacter_IronBear* IronBear);
		void ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
