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
	 * BlueprintGeneratedClass ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C
	 * Size -> 0x0028 (FullSize[0x0168] - InheritedSize[0x0140])
	 */
	class UACharge_PetLoader_Charge_C : public UGbxAction_AICharge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0140(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               ChargeDamage;                                            // 0x0148(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UBPEventHub_Beastmaster_C*                           EventHubOwner;                                           // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnLoop(class AActor* Actor);
		void AttackCommandUsed();
		void StrikeDamage();
		void OnStrike(class AActor* Actor);
		void OnHitWall(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnServerBegin(class AActor* Actor);
		void CallAttackCommandUsed();
		void ExecuteUbergraph_ACharge_PetLoader_Charge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
