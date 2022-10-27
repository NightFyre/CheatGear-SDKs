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
	 * BlueprintGeneratedClass WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C
	 * Size -> 0x0028 (FullSize[0x0AB0] - InheritedSize[0x0A88])
	 */
	class AWeaponType_Hardpoints_BearFist_C : public AWeaponType_Hardpoints_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A88(0x0008) Transient, DuplicateTransient
		class UGameplayTasksComponent*                             GameplayTasks;                                           // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxActionComponent*                                 GbxAction;                                               // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPAnim_IronBear_BearFist_C*                         BPAnim_BearFist_3rd;                                     // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPAnim_IronBear_BearFist_C*                         BPAnim_BearFist_1st;                                     // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void CausedDamage_BearFist(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void K2_Initialize();
		void K2_InitializeMod();
		void K2_Initialize1P();
		void K2_InitializeMod1P();
		void InitializeHardPointIronCub();
		void ExecuteUbergraph_WeaponType_Hardpoints_BearFist(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
