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
	 * UserDefinedStruct Struct_Artifact_Abilities.Struct_Artifact_Abilities
	 * Size -> 0x0038
	 */
	struct FStruct_Artifact_Abilities
	{
	public:
		class FText                                                Description_43_9E2B784A4ADF376134B3F99DDFEF0B9B;         // 0x0000(0x0018) Edit, BlueprintVisible
		float                                                      Value1Base_44_6007CA5C418B4F68A7493B9141BCAC47;          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value1Max_45_2EEE7B5943AFA52606550BB02E17447D;           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ValueScalar_60_D29B9BBA465C135685CC8EA9E0A4CA2D;         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RarityScaler_Common_30_3C55EE9A4939DE9FB4C6F69F476CAF36; // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RarityScaler_Uncommon_32_2A7E73B548122F1E2092C89B09B6D7B0; // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RarityScaler_Rare_34_3225B99F415ED9CF81215FAEE9E3D985;   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RarityScaler_VeryRare_36_530AB05146FE4FE3DFE021BE7419CF71; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
