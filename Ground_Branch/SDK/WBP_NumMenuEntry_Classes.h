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
	 * WidgetBlueprintGeneratedClass WBP_NumMenuEntry.WBP_NumMenuEntry_C
	 * Size -> 0x0024 (FullSize[0x0284] - InheritedSize[0x0260])
	 */
	class UWBP_NumMenuEntry_C : public UUserWidget
	{
	public:
		class UTextBlock*                                          TextBlock_1;                                             // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                EntryText;                                               // 0x0268(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    Number;                                                  // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		class FText Get_TextBlock_0_Text_1();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
