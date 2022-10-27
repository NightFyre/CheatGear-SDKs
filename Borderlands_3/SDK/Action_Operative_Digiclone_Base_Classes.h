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
	 * BlueprintGeneratedClass Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UAction_Operative_Digiclone_Base_C : public UOakAction_Anim_ActionAbility_Digiclone
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) Transient, DuplicateTransient

	public:
		void AN_ShowDevice();
		void AN_HideDevice();
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBeginBringUpWeapon(class AActor* Actor);
		void ExecuteUbergraph_Action_Operative_Digiclone_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
