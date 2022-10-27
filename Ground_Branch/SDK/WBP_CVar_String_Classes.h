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
	 * WidgetBlueprintGeneratedClass WBP_CVar_String.WBP_CVar_String_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UWBP_CVar_String_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ComboBox_C*                                     ComboBox_Values;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_153;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_1;                                               // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_585;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0288(0x0018) Edit, BlueprintVisible
		class FString                                              ConfigName;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ConfigSection;                                           // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CVarName;                                                // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    InitialValue;                                            // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_02QU[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        Entries;                                                 // 0x02D8(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      Strings;                                                 // 0x02E8(0x0010) Edit, BlueprintVisible
		class FString                                              Tooltip;                                                 // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetKey(class FString* Key);
		void IsDirty(bool* IsDirty);
		class UWidget* GetToolTipWidget_1();
		void SetInitialValue(const class FString& NewValue);
		void SetValue(int32_t NewValue);
		void SetDefaultValue();
		void Construct();
		void SetConfigValue();
		void RevertToInitialValue();
		void SetKeyValue(const class FString& KeyValueAsString);
		void Refresh();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_CVar_String(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
