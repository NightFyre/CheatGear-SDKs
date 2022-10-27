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
	 * WidgetBlueprintGeneratedClass BP_TextWithActions.BP_TextWithActions_C
	 * Size -> 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
	 */
	class UBP_TextWithActions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URichTextBlock*                                      RichText;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0240(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FLessonInputAction>                          Actions;                                                 // 0x0258(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		EHorizontalAlignment                                       TextAlignment;                                           // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JRPK[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          TextStyleSet;                                            // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateTextWithActions(const class FText& InText, TArray<struct FLessonInputAction>* InActions);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BP_TextWithActions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
