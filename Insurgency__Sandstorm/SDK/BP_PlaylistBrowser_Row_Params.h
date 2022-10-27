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
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.UpdateXPState
	 */
	struct UBP_PlaylistBrowser_Row_C_UpdateXPState_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnKeyDown
	 */
	struct UBP_PlaylistBrowser_Row_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.Get_SearchingForOtherPlaylistOverlay_Visibility_1
	 */
	struct UBP_PlaylistBrowser_Row_C_Get_SearchingForOtherPlaylistOverlay_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.UpdateTextStyle
	 */
	struct UBP_PlaylistBrowser_Row_C_UpdateTextStyle_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.SetSelectedState
	 */
	struct UBP_PlaylistBrowser_Row_C_SetSelectedState_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipEvent;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YNNP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.SetHoverState
	 */
	struct UBP_PlaylistBrowser_Row_C_SetHoverState_Params
	{
	public:
		bool                                                       bHovered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.PreConstruct
	 */
	struct UBP_PlaylistBrowser_Row_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.Construct
	 */
	struct UBP_PlaylistBrowser_Row_C_Construct_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnMouseLeave
	 */
	struct UBP_PlaylistBrowser_Row_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnMouseEnter
	 */
	struct UBP_PlaylistBrowser_Row_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_Row_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnAddedToFocusPath
	 */
	struct UBP_PlaylistBrowser_Row_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnRemovedFromFocusPath
	 */
	struct UBP_PlaylistBrowser_Row_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnClicked
	 */
	struct UBP_PlaylistBrowser_Row_C_OnClicked_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.ExecuteUbergraph_BP_PlaylistBrowser_Row
	 */
	struct UBP_PlaylistBrowser_Row_C_ExecuteUbergraph_BP_PlaylistBrowser_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnHovered__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_Row_C_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OO2N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlaylist*                                           Playlist;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FQueryOpenPoolsResultsEntry                         BackendData;                                             // 0x0010(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser_Row.BP_PlaylistBrowser_Row_C.OnSelected__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_Row_C_OnSelected__DelegateSignature_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FQueryOpenPoolsResultsEntry                         BackendData;                                             // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Selected;                                                // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
