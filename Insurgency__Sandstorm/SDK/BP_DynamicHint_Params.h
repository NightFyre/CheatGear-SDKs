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
	 * Function BP_DynamicHint.BP_DynamicHint_C.Update Use Progress
	 */
	struct UBP_DynamicHint_C_Update_Use_Progress_Params
	{	};

	/**
	 * Function BP_DynamicHint.BP_DynamicHint_C.Get Dynamic Hint  Opacity
	 */
	struct UBP_DynamicHint_C_Get_Dynamic_Hint_Opacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_18YB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DynamicHint.BP_DynamicHint_C.Tick
	 */
	struct UBP_DynamicHint_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicHint.BP_DynamicHint_C.UpdateVisibility
	 */
	struct UBP_DynamicHint_C_UpdateVisibility_Params
	{	};

	/**
	 * Function BP_DynamicHint.BP_DynamicHint_C.OnFillRowWithInformation
	 */
	struct UBP_DynamicHint_C_OnFillRowWithInformation_Params
	{
	public:
		bool                                                       IsPrimaryRow;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TX1Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                AdditionalText;                                          // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTexture2D*                                          HintTexture;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionName;                                              // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0030(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Timeout;                                                 // 0x003C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicHint.BP_DynamicHint_C.OnFillRowWithInformationMultipleActions
	 */
	struct UBP_DynamicHint_C_OnFillRowWithInformationMultipleActions_Params
	{
	public:
		bool                                                       IsPrimaryRow;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OWIE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                AdditionalText;                                          // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTexture2D*                                          HintTexture;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        ActionNames;                                             // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0038(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Timeout;                                                 // 0x0044(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicHint.BP_DynamicHint_C.ExecuteUbergraph_BP_DynamicHint
	 */
	struct UBP_DynamicHint_C_ExecuteUbergraph_BP_DynamicHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
