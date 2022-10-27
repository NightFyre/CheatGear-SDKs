#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript
	 */
	struct ABP_ItemPreview_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
	 */
	struct ABP_ItemPreview_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
	 */
	struct ABP_ItemPreview_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
	 */
	struct ABP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature
	 */
	struct ABP_ItemPreview_C_PreviewShutdown__DelegateSignature_Params
	{
	public:
		struct FPiratePreviewShutdownEvent                         Data;                                                    // 0x0000(0x0001)  (Parm)
	};

	/**
	 * Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature
	 */
	struct ABP_ItemPreview_C_PreviewReady__DelegateSignature_Params
	{
	public:
		struct FPiratePreviewReadyEvent                            Data;                                                    // 0x0000(0x0098)  (Parm)
	};

	/**
	 * Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature
	 */
	struct ABP_ItemPreview_C_PreviewBusy__DelegateSignature_Params
	{
	public:
		struct FPiratePreviewBusyEvent                             Data;                                                    // 0x0000(0x0001)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
