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
	 * BlueprintGeneratedClass Ability_Artifact_HotDrop.Ability_Artifact_HotDrop_C
	 * Size -> 0x006E (FullSize[0x0188] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_HotDrop_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_LISW[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		float                                                      BonusDamage;                                             // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BPXL[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ElementalDamageType;                                     // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_PhoenixDive; // 0x0138(0x0028)
		int32_t                                                    NumProjectiles;                                          // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartLocation;                                           // 0x0164(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             EndLocation;                                             // 0x0170(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MXC1[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPChar_Player_C*                                    Player;                                                  // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void OnDeactivated();
		void SlamEnd(const struct FGroundSlamEndedDetails& Details);
		void ExecuteUbergraph_Ability_Artifact_HotDrop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
