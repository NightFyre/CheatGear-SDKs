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
	 * WidgetBlueprintGeneratedClass WBP_Config_FullscreenMode.WBP_Config_FullscreenMode_C
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class UWBP_Config_FullscreenMode_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_ComboBox_C*                                     DropDown_FullscreenMode;                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    InitialValue;                                            // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WJKX[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIntPoint>                                   Resolutions;                                             // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsDirty(bool* IsDirty);
		void GetKey(class FString* Key);
		void SetValue(int32_t New_Value);
		void SetKeyValue(const class FString& KeyValueAsString);
		void Refresh();
		void SetDefaultValue();
		void Construct();
		void SetInitialValue(int32_t NewValue);
		void SetConfigValue();
		void RevertToInitialValue();
		void BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature(int32_t Index);
		void ExecuteUbergraph_WBP_Config_FullscreenMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
