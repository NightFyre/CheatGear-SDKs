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
	 * WidgetBlueprintGeneratedClass BP_RulesModalColumn.BP_RulesModalColumn_C
	 * Size -> 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
	 */
	class UBP_RulesModalColumn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SlideOutToRight;                                         // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SlideOutToLeft;                                          // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SlideInFromLeft;                                         // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SlideInFromRight;                                        // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_RulesModal_Bulletpoint_C*                        BP_RulesModal_Bulletpoint_193;                           // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RulesModal_Bulletpoint_C*                        BP_RulesModal_Bulletpoint_C_416;                         // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_102;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RuleList;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Rule;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextTitle;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Rule;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlaylistFeature*                                    PlaylistFeature;                                         // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTBP_RulesModalColumn_2();
		void SequenceEvent__ENTRYPOINTBP_RulesModalColumn_1();
		void DestroySelf();
		void OnLoaded_0C966274487CF71B7209A99F707363E1(class UObject* Loaded);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_RulesModalColumn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
