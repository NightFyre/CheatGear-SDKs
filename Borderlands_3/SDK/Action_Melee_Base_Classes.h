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
	 * BlueprintGeneratedClass Action_Melee_Base.Action_Melee_Base_C
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UAction_Melee_Base_C : public UOakAction_Anim_PlayerMelee
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) Transient, DuplicateTransient

	public:
		void OnBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBeginBringUpWeapon(class AActor* Actor);
		void ExecuteUbergraph_Action_Melee_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
