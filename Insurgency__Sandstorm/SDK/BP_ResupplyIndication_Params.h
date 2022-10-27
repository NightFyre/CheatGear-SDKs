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
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.UpdateSupplyPoints
	 */
	struct UBP_ResupplyIndication_C_UpdateSupplyPoints_Params
	{
	public:
		int32_t                                                    NewSupplyPoints;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGGR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.SetCanResupply
	 */
	struct UBP_ResupplyIndication_C_SetCanResupply_Params
	{
	public:
		bool                                                       bNewCanResupply;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.Finished_09BC22584AA513E0F8156FBCF390AF7E
	 */
	struct UBP_ResupplyIndication_C_Finished_09BC22584AA513E0F8156FBCF390AF7E_Params
	{	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.Finished_42303AD64EF95B325BE93EACDC8D409D
	 */
	struct UBP_ResupplyIndication_C_Finished_42303AD64EF95B325BE93EACDC8D409D_Params
	{	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.Construct
	 */
	struct UBP_ResupplyIndication_C_Construct_Params
	{	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.OnTotalSupplyChanged
	 */
	struct UBP_ResupplyIndication_C_OnTotalSupplyChanged_Params
	{
	public:
		int32_t                                                    AvailableSupply;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.OnAvailableSupplyChanged
	 */
	struct UBP_ResupplyIndication_C_OnAvailableSupplyChanged_Params
	{
	public:
		int32_t                                                    AvailableSupply;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.PlayFadeInOrOut
	 */
	struct UBP_ResupplyIndication_C_PlayFadeInOrOut_Params
	{
	public:
		bool                                                       bFadeIn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ResupplyIndication.BP_ResupplyIndication_C.ExecuteUbergraph_BP_ResupplyIndication
	 */
	struct UBP_ResupplyIndication_C_ExecuteUbergraph_BP_ResupplyIndication_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
