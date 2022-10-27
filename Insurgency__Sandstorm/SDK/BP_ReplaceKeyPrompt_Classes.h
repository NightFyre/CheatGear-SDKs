#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_ReplaceKeyPrompt.BP_ReplaceKeyPrompt_C
	 * Size -> 0x0188 (FullSize[0x03B8] - InheritedSize[0x0230])
	 */
	class UBP_ReplaceKeyPrompt_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_GenericDialog_C*                                 BP_GenericDialog;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FKeyBindingOption                                   KeyBindingOption;                                        // 0x0240(0x0130) Edit, BlueprintVisible, ExposeOnSpawn
		struct FKey                                                ConflictingKey;                                          // 0x0370(0x0018) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnReplaceBinding;                                        // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                ConflictingActionText;                                   // 0x0398(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FName                                                ConflictActionName;                                      // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Construct();
		void BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_10_OnConfirmed__DelegateSignature();
		void ExecuteUbergraph_BP_ReplaceKeyPrompt(int32_t EntryPoint);
		void OnReplaceBinding__DelegateSignature(const struct FKeyBindingOption& KeyBindingOption, const struct FKey& ConflictKey, const class FName& ConflictAction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
