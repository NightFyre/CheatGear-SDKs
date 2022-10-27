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
	 * BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C
	 * Size -> 0x0018 (FullSize[0x09E0] - InheritedSize[0x09C8])
	 */
	class AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C : public AProj_Siren_DLCSkill_WalkingPotato_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09C8(0x0008) Transient, DuplicateTransient
		int32_t                                                    MiniShots;                                               // 0x09D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D0CG[0x4];                                   // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              MiniShotTarget;                                          // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SirenDLCActionSkill_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void FireShotAtEnemy();
		void StartFiringShots();
		void ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
