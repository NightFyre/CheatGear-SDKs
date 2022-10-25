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
	 * Class WarMap.WarMapStateInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWarMapStateInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WarMap.WarMapInteractionComponent
	 * Size -> 0x00A0 (FullSize[0x01C8] - InheritedSize[0x0128])
	 */
	class UWarMapInteractionComponent : public UInteractableComponent
	{
	public:
		unsigned char                                              UnknownData_1LCI[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OpenMapInteractionText;                                  // 0x0130(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_8TIJ[0x20];                                  // 0x0148(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                CannotOpenMapInteractionText;                            // 0x0168(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_PTGI[0x20];                                  // 0x0180(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              OpenMapInputId;                                          // 0x01A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_8GA1[0x20];                                  // 0x01A8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
