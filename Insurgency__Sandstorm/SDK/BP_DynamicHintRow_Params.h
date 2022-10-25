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
	 * Function BP_DynamicHintRow.BP_DynamicHintRow_C.GetAdditionalInfo
	 */
	struct UBP_DynamicHintRow_C_GetAdditionalInfo_Params
	{
	public:
		class FText                                                AdditionalInfo;                                          // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_DynamicHintRow.BP_DynamicHintRow_C.Fill Row With Information
	 */
	struct UBP_DynamicHintRow_C_Fill_Row_With_Information_Params
	{
	public:
		class FText                                                Additional_Info;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          HintTexture;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        ActionName;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FVector                                             UseLocation;                                             // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Timeout;                                                 // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicHintRow.BP_DynamicHintRow_C.Construct
	 */
	struct UBP_DynamicHintRow_C_Construct_Params
	{	};

	/**
	 * Function BP_DynamicHintRow.BP_DynamicHintRow_C.ExecuteUbergraph_BP_DynamicHintRow
	 */
	struct UBP_DynamicHintRow_C_ExecuteUbergraph_BP_DynamicHintRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X9EW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
