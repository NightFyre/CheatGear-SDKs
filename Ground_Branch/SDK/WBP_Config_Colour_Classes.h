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
	 * WidgetBlueprintGeneratedClass WBP_Config_Colour.WBP_Config_Colour_C
	 * Size -> 0x0081 (FullSize[0x02E1] - InheritedSize[0x0260])
	 */
	class UWBP_Config_Colour_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TextBlock_585;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ColourPicker_C*                                 WBP_ColourPicker;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0278(0x0018) Edit, BlueprintVisible
		class FString                                              ConfigName;                                              // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ConfigSection;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ConfigKey;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FLinearColor                                        DefaultValue;                                            // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        InitialValue;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSaveOnChange;                                           // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetKey(class FString* Key);
		void IsDirty(bool* IsDirty);
		void SetInitialValue(const struct FLinearColor& NewValue);
		void SetValue(const struct FLinearColor& NewValue);
		void SetKeyValue(const class FString& KeyValueAsString);
		void Construct();
		void SetConfigValue();
		void RevertToInitialValue();
		void PreConstruct(bool IsDesignTime);
		void Refresh();
		void SetDefaultValue();
		void BndEvt__WBP_Config_Colour_WBP_ColourPicker_K2Node_ComponentBoundEvent_1_OnColourPicked__DelegateSignature(const struct FLinearColor& Colour);
		void ExecuteUbergraph_WBP_Config_Colour(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
