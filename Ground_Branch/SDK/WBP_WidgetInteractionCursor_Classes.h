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
	 * WidgetBlueprintGeneratedClass WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C
	 * Size -> 0x0011 (FullSize[0x0271] - InheritedSize[0x0260])
	 */
	class UWBP_WidgetInteractionCursor_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_1;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bWidgetComponentValid;                                   // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		ESlateVisibility GetVisibility_1();
		void OnHoveredWidgetChanged_Event_1(class UWidgetComponent* WidgetComponent, class UWidgetComponent* PreviousWidgetComponent);
		void Construct();
		void ExecuteUbergraph_WBP_WidgetInteractionCursor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
