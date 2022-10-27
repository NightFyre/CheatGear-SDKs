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
	 * BlueprintGeneratedClass Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C
	 * Size -> 0x0018 (FullSize[0x0230] - InheritedSize[0x0218])
	 */
	class UAction_Beastmaster_AttackCommand_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		class AOakCharacter*                                       BeastmasterCharacter;                                    // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       BeastmasterPet;                                          // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Notify_Attack();
		void OnBeginBringUpWeapon(class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void Notify_Feedback();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_Action_Beastmaster_AttackCommand(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
