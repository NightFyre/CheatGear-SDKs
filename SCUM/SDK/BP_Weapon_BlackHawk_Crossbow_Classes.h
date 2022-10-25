#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C
	 * Size -> 0x0034 (FullSize[0x2FE4] - InheritedSize[0x2FB0])
	 */
	class ABP_Weapon_BlackHawk_Crossbow_C : public AWeaponCrossbow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2FB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UItemObstructionTestCapsuleComponent*                ItemObstructionTestCapsule3;                             // 0x2FB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UItemObstructionTestCapsuleComponent*                ItemObstructionTestCapsule4;                             // 0x2FC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UItemObstructionTestCapsuleComponent*                ItemObstructionTestCapsule1;                             // 0x2FC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UItemObstructionTestCapsuleComponent*                ItemObstructionTestCapsule2;                             // 0x2FD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsule;                             // 0x2FD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      IronSightsHideAlpha;                                     // 0x2FE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanAddAttachment(class AWeaponAttachment* attachment);
		void OnAttachmentAdded(class AWeaponAttachment* attachment);
		void OnAttachmentRemoved(class AWeaponAttachment* attachment);
		void ExecuteUbergraph_BP_Weapon_BlackHawk_Crossbow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
