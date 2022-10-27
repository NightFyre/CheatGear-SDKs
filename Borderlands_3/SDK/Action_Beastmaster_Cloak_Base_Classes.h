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
	 * BlueprintGeneratedClass Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C
	 * Size -> 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
	 */
	class UAction_Beastmaster_Cloak_Base_C : public UOakAction_Anim_ActionAbility_Pet_Spiderant
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) Transient, DuplicateTransient

	public:
		void Notify_Stealth();
		void Notify_StealthFeedback();
		void ExecuteUbergraph_Action_Beastmaster_Cloak_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
