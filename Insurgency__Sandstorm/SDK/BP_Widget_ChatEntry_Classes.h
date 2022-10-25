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
	 * WidgetBlueprintGeneratedClass BP_Widget_ChatEntry.BP_Widget_ChatEntry_C
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class UBP_Widget_ChatEntry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeText;                                                // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class URichTextBlock*                                      Entry;                                                   // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ChatText;                                                // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      ExpireTime;                                              // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      FadeOutTime;                                             // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BP_Widget_ChatEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
