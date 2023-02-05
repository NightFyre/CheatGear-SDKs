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
	 * WidgetBlueprintGeneratedClass WB_NickName.WB_NickName_C
	 * Size -> 0x0028 (FullSize[0x0348] - InheritedSize[0x0320])
	 */
	class UWB_NickName_C : public UNickNameWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URichTextBlock*                                      NickNameText;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                NickNameFormatText;                                      // 0x0330(0x0018) Edit, BlueprintVisible

	public:
		void OnNickNameStr(const class FString& NewValue, const class FString& OldValue);
		void SetNickNameFormat(const class FText& FormatText);
		void ExecuteUbergraph_WB_NickName(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
