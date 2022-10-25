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
	 * Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.UserConstructionScript
	 */
	struct ABP_PiratePreview_Lighting_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewReady__DelegateSignature
	 */
	struct ABP_PiratePreview_Lighting_C_PreviewReady__DelegateSignature_Params
	{
	public:
		struct FPiratePreviewReadyEvent                            Data;                                                    // 0x0000(0x0098)  (Parm)
	};

	/**
	 * Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewBusy__DelegateSignature
	 */
	struct ABP_PiratePreview_Lighting_C_PreviewBusy__DelegateSignature_Params
	{
	public:
		struct FPiratePreviewBusyEvent                             Data;                                                    // 0x0000(0x0001)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
