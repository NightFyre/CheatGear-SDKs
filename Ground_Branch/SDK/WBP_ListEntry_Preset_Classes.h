#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_ListEntry_Preset.WBP_ListEntry_Preset_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UWBP_ListEntry_Preset_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_Current;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_26;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Delete;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_134;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_5;                                             // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVaRestJsonObject*                                   JsonObj;                                                 // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              Filename;                                                // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPresetSelected;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              DisplayString;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPresetDeleted;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                DeleteTitle;                                             // 0x02D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DeleteMessage;                                           // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void BndEvt__Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void SetCurrentlySelected();
		void BndEvt__Button_192_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnOkClicked_Event_1(class UWBP_DialogueBox_C* Dialogue);
		void ExecuteUbergraph_WBP_ListEntry_Preset(int32_t EntryPoint);
		void OnPresetDeleted__DelegateSignature(const class FString& Filename);
		void OnPresetSelected__DelegateSignature(const class FString& DisplayString, const class FString& Filename, class UVaRestJsonObject* JsonObj);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
