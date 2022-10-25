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
	 * WidgetBlueprintGeneratedClass BP_ContextualHUDHint.BP_ContextualHUDHint_C
	 * Size -> 0x0051 (FullSize[0x0281] - InheritedSize[0x0230])
	 */
	class UBP_ContextualHUDHint_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              HintImage;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 HintKey;                                                 // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HintTextBlock;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                BindingNameForAction;                                    // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GamepadBindingNameForAction;                             // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HintImageTexture;                                        // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                HintText;                                                // 0x0268(0x0018) Edit, BlueprintVisible
		bool                                                       HasIcon;                                                 // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__HintKey_K2Node_ComponentBoundEvent_0_OnIconRebuit__DelegateSignature();
		void BuildIcon(bool Gamepad);
		void ExecuteUbergraph_BP_ContextualHUDHint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
