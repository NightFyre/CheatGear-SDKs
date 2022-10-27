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
	 * BlueprintGeneratedClass A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class UA_PetJabbermon_BarrelToss_C : public UA_Pet_AttackCommand_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) Transient, DuplicateTransient
		class AActor*                                              NewBarrelActor;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       OwnerChar;                                               // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Notify_Throw();
		void OnServerBegin(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_A_PetJabbermon_BarrelToss(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
