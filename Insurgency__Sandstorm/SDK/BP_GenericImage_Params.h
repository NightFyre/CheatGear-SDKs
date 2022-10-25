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
	 * Function BP_GenericImage.BP_GenericImage_C.SetBrushInternal
	 */
	struct UBP_GenericImage_C_SetBrushInternal_Params
	{	};

	/**
	 * Function BP_GenericImage.BP_GenericImage_C.UpdateImage
	 */
	struct UBP_GenericImage_C_UpdateImage_Params
	{
	public:
		class UTexture2D*                                          NewImage;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GenericImage.BP_GenericImage_C.PreConstruct
	 */
	struct UBP_GenericImage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GenericImage.BP_GenericImage_C.ExecuteUbergraph_BP_GenericImage
	 */
	struct UBP_GenericImage_C_ExecuteUbergraph_BP_GenericImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
