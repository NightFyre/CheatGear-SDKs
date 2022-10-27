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
	// # Structs
	// --------------------------------------------------
	/**
	 * AnimDataEntryStruct ADS_RowingBoatNative.ADS_RowingBoatNative
	 * Size -> 0x0098
	 */
	struct FADS_RowingBoatNative
	{
	public:
		struct FAthenaAnimationRowboatAnimationsFirstPerson        RowingBoatFirstPerson_11_1FEBDCAD4D0B1B9EC2D68CA56E8F9158; // 0x0000(0x0030) Edit, BlueprintVisible
		struct FAthenaAnimationRowboatAnimationsThirdPerson        RowingBoatThirdPerson_12_5C16F0F64D75210187251B9DFAA12B1F; // 0x0030(0x0050) Edit, BlueprintVisible
		struct FAthenaAnimationRowboatAnimationsPassenger          RowingBoatPassengers_13_9AC770BB4DB0506105B8B18F3ED44355; // 0x0080(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
