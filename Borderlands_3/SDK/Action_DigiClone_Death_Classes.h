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
	 * BlueprintGeneratedClass Action_DigiClone_Death.Action_DigiClone_Death_C
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class UAction_DigiClone_Death_C : public UGBXAction_EnemyVariableParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) Transient, DuplicateTransient
		class AOakCharacter*                                       My_Owner;                                                // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CoordinatedEffect;                                       // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnServerBegin(class AActor* Actor);
		void PlayDeathCE();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void PlayScriptDeath();
		void ExecuteUbergraph_Action_DigiClone_Death(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
