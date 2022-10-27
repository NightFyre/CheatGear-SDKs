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
	 * WidgetBlueprintGeneratedClass WBP_Toggle.WBP_Toggle_C
	 * Size -> 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
	 */
	class UWBP_Toggle_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_TextButton_C*                                   OffBtn;                                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_TextButton_C*                                   OnBtn;                                                   // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bToggleOn;                                               // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XC4P[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ToggleStateChanged;                                      // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                OnText;                                                  // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                OffText;                                                 // 0x0278(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void UpdateDesignerView();
		void IsToggledOn(bool* bToggledOn);
		void SetToggle(bool bInToggle);
		void BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
		void BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_Toggle(int32_t EntryPoint);
		void ToggleStateChanged__DelegateSignature(bool bToggledOn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
