#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class Describables.DescribableComponent
	 * Size -> 0x0060 (FullSize[0x0188] - InheritedSize[0x0128])
	 */
	class UDescribableComponent : public UInteractableComponent
	{
	public:
		unsigned char                                              UnknownData_SQTM[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       TooltipActiveOnBeginPlay;                                // 0x0130(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YTT[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DescribableTooltipText;                                  // 0x0138(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_OJR6[0x20];                                  // 0x0150(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       TooltipActive;                                           // 0x0170(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_E111[0x17];                                  // 0x0171(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetTooltipActive(bool IsActive);
		void OnRep_TooltipActive();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
