#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_FeaturesPopUp.BP_FeaturesPopUp_C.OnAnalogValueChanged
	 */
	struct UBP_FeaturesPopUp_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_FeaturesPopUp.BP_FeaturesPopUp_C.AddImage
	 */
	struct UBP_FeaturesPopUp_C_AddImage_Params
	{
	public:
		class FString                                              ImageUrl;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FeaturesPopUp.BP_FeaturesPopUp_C.Construct
	 */
	struct UBP_FeaturesPopUp_C_Construct_Params
	{	};

	/**
	 * Function BP_FeaturesPopUp.BP_FeaturesPopUp_C.PreConstruct
	 */
	struct UBP_FeaturesPopUp_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FeaturesPopUp.BP_FeaturesPopUp_C.UpdateText
	 */
	struct UBP_FeaturesPopUp_C_UpdateText_Params
	{	};

	/**
	 * Function BP_FeaturesPopUp.BP_FeaturesPopUp_C.ExecuteUbergraph_BP_FeaturesPopUp
	 */
	struct UBP_FeaturesPopUp_C_ExecuteUbergraph_BP_FeaturesPopUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
