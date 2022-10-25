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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct FServerListingLayoutInfo.FServerListingLayoutInfo
	 * Size -> 0x0034
	 */
	struct FFServerListingLayoutInfo
	{
	public:
		class FText                                                HeaderLabel_19_1F3495A44170D55BD20587BF982EEAAB;         // 0x0000(0x0018) Edit, BlueprintVisible
		ETextJustify                                               LabelJustification_20_FDBD545240CA011C3132D58BE708809B;  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZDZP[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             SlotPadding_15_16A3E958452039B138BC338AD775C2D9;         // 0x001C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MinDesiredWidth_16_81A194A649DD44332AC5FC91B6521D2A;     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDesiredWidth_17_1583BB354DB575BC6BB54E8AF33C09C1;     // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
