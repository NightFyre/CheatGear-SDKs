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
	 * WidgetBlueprintGeneratedClass BP_DropdownBox.BP_DropdownBox_C
	 * Size -> 0x00B0 (FullSize[0x02E0] - InheritedSize[0x0230])
	 */
	class UBP_DropdownBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UComboBoxText*                                       ComboBox;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FName, class FText>                             Options;                                                 // 0x0240(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, class FText>                             DefaultOptions;                                          // 0x0290(0x0050) Edit, BlueprintVisible

	public:
		void AddOption(const class FName& ID, const class FText& Text);
		void CreateDefaultOptions();
		void Construct();
		void ExecuteUbergraph_BP_DropdownBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
