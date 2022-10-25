#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * UserDefinedStruct Struct_Artifact_Stats.Struct_Artifact_Stats
	 * Size -> 0x0048
	 */
	struct FStruct_Artifact_Stats
	{
	public:
		float                                                      Value_Base_3_6007CA5C418B4F68A7493B9141BCAC47;           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value_Max_9_2EEE7B5943AFA52606550BB02E17447D;            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TeamValue_Base_13_8B321D8C436F3966DED414993874E3E3;      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TeamValue_Max_14_7E2FB79644C18FC6487C86AEF1E07F22;       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeInitializationData                        ItemLevel_Scaler_19_8F6894FF46FBB6CF8B35AA98839DC99C;    // 0x0010(0x0038) Edit, BlueprintVisible, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
