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
	 * Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.StartFadein
	 */
	struct UBP_PlayMenu_PlaylistBGImage_C_StartFadein_Params
	{
	public:
		bool                                                       bImmediate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y5YI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.PreConstruct
	 */
	struct UBP_PlayMenu_PlaylistBGImage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.Construct
	 */
	struct UBP_PlayMenu_PlaylistBGImage_C_Construct_Params
	{	};

	/**
	 * Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.OnAnimationFinished
	 */
	struct UBP_PlayMenu_PlaylistBGImage_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.ExecuteUbergraph_BP_PlayMenu_PlaylistBGImage
	 */
	struct UBP_PlayMenu_PlaylistBGImage_C_ExecuteUbergraph_BP_PlayMenu_PlaylistBGImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.OnFadeinComplete__DelegateSignature
	 */
	struct UBP_PlayMenu_PlaylistBGImage_C_OnFadeinComplete__DelegateSignature_Params
	{
	public:
		class UWidget*                                             FadedInWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
