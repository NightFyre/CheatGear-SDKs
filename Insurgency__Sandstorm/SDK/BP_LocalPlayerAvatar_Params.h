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
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.SetDefaultAvatar
	 */
	struct UBP_LocalPlayerAvatar_C_SetDefaultAvatar_Params
	{	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnPlatformConnectionStatusChanged
	 */
	struct UBP_LocalPlayerAvatar_C_OnPlatformConnectionStatusChanged_Params
	{
	public:
		bool                                                       bConnected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QD2J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnAvatarUpdated
	 */
	struct UBP_LocalPlayerAvatar_C_OnAvatarUpdated_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.Construct
	 */
	struct UBP_LocalPlayerAvatar_C_Construct_Params
	{	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnMouseEnter
	 */
	struct UBP_LocalPlayerAvatar_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnMouseLeave
	 */
	struct UBP_LocalPlayerAvatar_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnAddedToFocusPath
	 */
	struct UBP_LocalPlayerAvatar_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnRemovedFromFocusPath
	 */
	struct UBP_LocalPlayerAvatar_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_LocalPlayerAvatar_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.ExecuteUbergraph_BP_LocalPlayerAvatar
	 */
	struct UBP_LocalPlayerAvatar_C_ExecuteUbergraph_BP_LocalPlayerAvatar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnUnhovered__DelegateSignature
	 */
	struct UBP_LocalPlayerAvatar_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_LocalPlayerAvatar.BP_LocalPlayerAvatar_C.OnHovered__DelegateSignature
	 */
	struct UBP_LocalPlayerAvatar_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
