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
	 * WidgetBlueprintGeneratedClass BP_OptionsHeading.BP_OptionsHeading_C
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class UBP_OptionsHeading_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TextBlock_2;                                             // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                TextHeading;                                             // 0x0240(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_OptionsHeading(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
