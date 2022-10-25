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
	 * WidgetBlueprintGeneratedClass WBP_Config_String.WBP_Config_String_C
	 * Size -> 0x0099 (FullSize[0x02F9] - InheritedSize[0x0260])
	 */
	class UWBP_Config_String_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ComboBox_C*                                     ComboBox_Values;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_585;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0278(0x0018) Edit, BlueprintVisible
		class FString                                              ConfigName;                                              // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ConfigSection;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ConfigKey;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DefaultValue;                                            // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    InitialValue;                                            // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NVKV[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        Entries;                                                 // 0x02D8(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      Strings;                                                 // 0x02E8(0x0010) Edit, BlueprintVisible
		bool                                                       bSaveOnChange;                                           // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetKey(class FString* Key);
		void IsDirty(bool* IsDirty);
		void SetSpecialWarningTooltip();
		void SetInitialValue(const class FString& NewValue);
		void SetValue(int32_t NewValue);
		void SetKeyValue(const class FString& KeyValueAsString);
		void Construct();
		void SetConfigValue();
		void RevertToInitialValue();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ComboBox_Values_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature(int32_t Index);
		void Refresh();
		void SetDefaultValue();
		void ExecuteUbergraph_WBP_Config_String(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
