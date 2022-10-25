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
	 * BlueprintGeneratedClass BP_CE_EnrageMod1_Player.BP_CE_EnrageMod1_Player_C
	 * Size -> 0x0021 (FullSize[0x0199] - InheritedSize[0x0178])
	 */
	class UBP_CE_EnrageMod1_Player_C : public UOakAction_CoordinatedEffect_ActionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0178(0x0008) Transient, DuplicateTransient
		struct FStatusEffectInstanceReference                      Mod1SE;                                                  // 0x0180(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		bool                                                       bAppliedScreenParticle;                                  // 0x0198(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsLocallyControlled(bool* bRes);
		void OnBegin(class AActor* Actor);
		void OnServerBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_BP_CE_EnrageMod1_Player(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
