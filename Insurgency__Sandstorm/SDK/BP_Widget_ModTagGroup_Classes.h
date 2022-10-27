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
	 * WidgetBlueprintGeneratedClass BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C
	 * Size -> 0x00F8 (FullSize[0x0328] - InheritedSize[0x0230])
	 */
	class UBP_Widget_ModTagGroup_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          CategoryText;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_239;                                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        TagBox;                                                  // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Category;                                                // 0x0250(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FModTag>                                     Tags;                                                    // 0x0268(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTagsUpdated;                                           // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              SelectedTags[0x50];                                      // 0x0288(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnSelectedTags[0x50];                                    // 0x02D8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void GetUnSelectedTags();
		void GetSelectedTags();
		void UpdateSelectedTags();
		void PreConstruct(bool IsDesignTime);
		void OnOptionToggled(const class FName& Key, bool Toggled);
		void ExecuteUbergraph_BP_Widget_ModTagGroup(int32_t EntryPoint);
		void OnTagsUpdated__DelegateSignature(class UBP_Widget_ModTagGroup_C* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
