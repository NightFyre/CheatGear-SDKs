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
	 * BlueprintGeneratedClass Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UAction_Beastmaster_DLCSkill_Start_Parent_C : public UOakAction_Anim_ActionAbility_Pet
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		class AProjectile_Beastmaster_TrapSpawner_C*               Trap;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Notify_SpawnTrap();
		void OnServerBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
