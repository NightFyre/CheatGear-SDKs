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
	 * BlueprintGeneratedClass AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UAIAspect_SetBlackboardBool_C : public UAIAspect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0100(0x0008) Transient, DuplicateTransient
		struct FGbxBlackboardKeySelector                           Key;                                                     // 0x0108(0x0010) Edit, BlueprintVisible, NoDestructor

	public:
		void BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
		void BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
		void ExecuteUbergraph_AIAspect_SetBlackboardBool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
