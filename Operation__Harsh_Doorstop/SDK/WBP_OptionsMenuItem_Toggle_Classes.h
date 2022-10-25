#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_OptionsMenuItem_Toggle.WBP_OptionsMenuItem_Toggle_C
	 * Size -> 0x0088 (FullSize[0x02B8] - InheritedSize[0x0230])
	 */
	class UWBP_OptionsMenuItem_Toggle_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          OptionText;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Toggle_C*                                       OptionToggle;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                TextTooltip;                                             // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             ToggleStateChanged;                                      // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                OnText;                                                  // 0x0288(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                OffText;                                                 // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void IsToggledOn(bool* bToggledOn);
		void SetToggle(bool bInToggle);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__OptionToggle_K2Node_ComponentBoundEvent_2_ToggleStateChanged__DelegateSignature(bool bToggledOn);
		void ExecuteUbergraph_WBP_OptionsMenuItem_Toggle(int32_t EntryPoint);
		void ToggleStateChanged__DelegateSignature(bool bToggledOn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
