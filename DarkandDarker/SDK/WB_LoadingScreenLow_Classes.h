#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_LoadingScreenLow.WB_LoadingScreenLow_C
	 * Size -> 0x0098 (FullSize[0x0328] - InheritedSize[0x0290])
	 */
	class UWB_LoadingScreenLow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              LoadingImage;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LoadingText;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LoadingTipsText;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        LoadingTipArray;                                         // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UTexture2D*>                                  LoadingTextureArray;                                     // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateFontInfo                                      LoadingTipFont;                                          // 0x02D0(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_WB_LoadingScreenLow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
