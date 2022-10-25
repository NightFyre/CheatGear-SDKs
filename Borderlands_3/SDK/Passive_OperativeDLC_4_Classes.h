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
	 * BlueprintGeneratedClass Passive_OperativeDLC_4.Passive_OperativeDLC_3_C
	 * Size -> 0x0031 (FullSize[0x01E1] - InheritedSize[0x01B0])
	 */
	class UPassive_OperativeDLC_3_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_OperativeDLC_4; // 0x01B8(0x0028)
		bool                                                       SkillReadied;                                            // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		EGbxAbilityState CalculateAbilityState();
		void OnActivated();
		void DLCSkill3_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void DLCSkill3_OnWeaponUsed(class AWeapon* EventWeapon);
		void DLCSkill3_UsedBarrier(bool PickedUp);
		void DLCSkill3_SwappedPlaces();
		void DLCSkill3_SEtDroneTarget(class AActor* NewTarget);
		void ExecuteUbergraph_Passive_OperativeDLC_4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
