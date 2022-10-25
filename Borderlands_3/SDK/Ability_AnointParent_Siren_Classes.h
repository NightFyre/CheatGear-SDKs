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
	 * BlueprintGeneratedClass Ability_AnointParent_Siren.Ability_AnointParent_Siren_C
	 * Size -> 0x004C (FullSize[0x020D] - InheritedSize[0x01C1])
	 */
	class UAbility_AnointParent_Siren_C : public UAbility_AnointParent_C
	{
	public:
		unsigned char                                              UnknownData_FKMV[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		class UBPEventHub_Siren_C*                                 SirenEventHub;                                           // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PhaseCast;                                               // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PhaseGraspStart;                                         // 0x01D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PhaseSlamStart;                                          // 0x01DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PhaseFlareStart;                                         // 0x01DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E9IN[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Siren; // 0x01E0(0x0028)
		bool                                                       GraspValidTarget;                                        // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PhaseGraspEnd;                                           // 0x0209(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PhaseSlamEnd;                                            // 0x020A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PhaseFlareEnd;                                           // 0x020B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnointWhileSkillActive;                                  // 0x020C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnointFlareStarted(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction ActionAction, bool Success);
		void AnointCastStarted(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction AttackAction, bool Success);
		void AnointGraspEnded(bool Killed);
		void AnointGraspStarted(class AActor* Enemy, EPhaseTranceElementalType Element);
		void AnointSlamEnded();
		void AnointSlamStarted();
		void OnActivated();
		void BindSirenEvents();
		void ExecuteUbergraph_Ability_AnointParent_Siren(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
