#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C
	 * Size -> 0x000C (FullSize[0x024C] - InheritedSize[0x0240])
	 */
	class UWBP_HDContextualWidgetBase_C : public UDFContextualWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		ESlateVisibility                                           VisibilitySatisfiedPrereqs;                              // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsEnabledSatisfiedPrereqs;                              // 0x0249(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           VisibilityUnsatisfiedPrereqs;                            // 0x024A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsEnabledUnsatisfiedPrereqs;                            // 0x024B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PrerequisitesMet();
		void PrerequisiteNotMet(class UDFContextualWidgetPrerequisiteBase* FailedPrereq);
		void ExecuteUbergraph_WBP_HDContextualWidgetBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
