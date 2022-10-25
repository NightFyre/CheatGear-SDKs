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
	 * WidgetBlueprintGeneratedClass BP_CG_GameSettingError.BP_CG_GameSettingError_C
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UBP_CG_GameSettingError_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_1;                                                 // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ErrorText;                                               // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BP_CG_GameSettingError(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
