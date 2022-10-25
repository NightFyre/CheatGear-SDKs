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
	 * BlueprintGeneratedClass ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UActionParent_Siren_SkillArms_C : public UOakAction_Anim_PhaseTranceArms
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) Transient, DuplicateTransient

	public:
		void AnimNotify_FadeOutArms();
		void AnimNotify_FadeInArms();
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_ActionParent_Siren_SkillArms(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
