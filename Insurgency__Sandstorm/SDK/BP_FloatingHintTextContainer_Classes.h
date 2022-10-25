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
	 * WidgetBlueprintGeneratedClass BP_FloatingHintTextContainer.BP_FloatingHintTextContainer_C
	 * Size -> 0x0018 (FullSize[0x04A0] - InheritedSize[0x0488])
	 */
	class UBP_FloatingHintTextContainer_C : public UFloatingHintTextContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0488(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FLinearColor                                        Color;                                                   // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESlateVisibility GetObjectiveVisibilty();
		struct FLinearColor GetColorAndOpacityForObjectives();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_FloatingHintTextContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
