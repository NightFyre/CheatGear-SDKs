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
	 * UserDefinedStruct SHDRadialMenu_OptionData.SHDRadialMenu_OptionData
	 * Size -> 0x0028
	 */
	struct FSHDRadialMenu_OptionData
	{
	public:
		class FText                                                Name_12_99AF5ED145774162AF6420BF7284600B;                // 0x0000(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          Icon_7_C4E650D34F88944E1AE759BDB3AE341D;                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          Submenu_11_FFA2C5184995E2E1079DDB864ABB6249;             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
