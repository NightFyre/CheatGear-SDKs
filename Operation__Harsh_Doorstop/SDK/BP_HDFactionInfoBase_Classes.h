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
	 * BlueprintGeneratedClass BP_HDFactionInfoBase.BP_HDFactionInfoBase_C
	 * Size -> 0x0770 (FullSize[0x0850] - InheritedSize[0x00E0])
	 */
	class UBP_HDFactionInfoBase_C : public UHDFactionInfo
	{
	public:
		struct FButtonStyle                                        TeamBtnSelectedStyle;                                    // 0x00E0(0x0278) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FButtonStyle                                        TeamBtnDeselectedStyle;                                  // 0x0358(0x0278) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FSlateBrush                                         TeamBtnSelectedBrush;                                    // 0x05D0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FSlateBrush                                         TeamBtnDeselectedBrush;                                  // 0x0658(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		unsigned char                                              CPFlagIcon[0x28];                                        // 0x06E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CharMesh[0x28];                                          // 0x0708(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CharMesh1P[0x28];                                        // 0x0730(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                TeamBtnDisplayText;                                      // 0x0758(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		class FText                                                VictoryText;                                             // 0x0770(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		unsigned char                                              RallyPointClass[0x28];                                   // 0x0788(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              OutpostClass[0x28];                                      // 0x07B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              AIControlledSquadLeaderKit[0x28];                        // 0x07D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AIControlledSquadMemberKit[0x28];                        // 0x0800(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AIVocalProfiles[0x28];                                   // 0x0828(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
