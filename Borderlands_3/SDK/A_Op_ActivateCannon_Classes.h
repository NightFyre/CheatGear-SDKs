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
	 * BlueprintGeneratedClass A_Op_ActivateCannon.A_Op_ActivateCannon_C
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class UA_Op_ActivateCannon_C : public UOakAction_Anim_ActionAbility_Operative
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) Transient, DuplicateTransient

	public:
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void AN_ShowDevice();
		void AN_HideDevice();
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBeginBringUpWeapon(class AActor* Actor);
		void Notify_SwapPlaces();
		void OnServerBegin(class AActor* Actor);
		void ExecuteUbergraph_A_Op_ActivateCannon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
