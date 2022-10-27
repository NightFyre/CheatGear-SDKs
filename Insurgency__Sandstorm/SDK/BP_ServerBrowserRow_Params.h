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
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.UpdateFavoriteState
	 */
	struct UBP_ServerBrowserRow_C_UpdateFavoriteState_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.IsFavoriteServer
	 */
	struct UBP_ServerBrowserRow_C_IsFavoriteServer_Params
	{
	public:
		bool                                                       IsFavorite;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_13EB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.PopulateMutatorList
	 */
	struct UBP_ServerBrowserRow_C_PopulateMutatorList_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetFavoriteStatus
	 */
	struct UBP_ServerBrowserRow_C_SetFavoriteStatus_Params
	{
	public:
		bool                                                       Favorite;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetModList
	 */
	struct UBP_ServerBrowserRow_C_SetModList_Params
	{
	public:
		struct FGetAllModsSchema                                   ModResults;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.FetchAdditionalServerInfo
	 */
	struct UBP_ServerBrowserRow_C_FetchAdditionalServerInfo_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetImageForServerType
	 */
	struct UBP_ServerBrowserRow_C_GetImageForServerType_Params
	{
	public:
		class UTexture2D*                                          Image;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetServerBrowserName
	 */
	struct UBP_ServerBrowserRow_C_GetServerBrowserName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OutText;                                                 // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.UpdateFavoriteStatus
	 */
	struct UBP_ServerBrowserRow_C_UpdateFavoriteStatus_Params
	{
	public:
		bool                                                       IsFavorite;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2OSL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.InitializeRowFromServer
	 */
	struct UBP_ServerBrowserRow_C_InitializeRowFromServer_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.SetRowSelected
	 */
	struct UBP_ServerBrowserRow_C_SetRowSelected_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnFocusReceived
	 */
	struct UBP_ServerBrowserRow_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnKeyDown
	 */
	struct UBP_ServerBrowserRow_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.GetBrushColor_1
	 */
	struct UBP_ServerBrowserRow_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.Get_PasswordProtected_Visibility_1
	 */
	struct UBP_ServerBrowserRow_C_Get_PasswordProtected_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.Get_JoinServer_bIsEnabled_1
	 */
	struct UBP_ServerBrowserRow_C_Get_JoinServer_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HLYR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnModsRetrieved_2EF1BEE342472D50EFB722822A73A793
	 */
	struct UBP_ServerBrowserRow_C_OnModsRetrieved_2EF1BEE342472D50EFB722822A73A793_Params
	{
	public:
		struct FGetAllModsSchema                                   ModData;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnItemExpansionChanged
	 */
	struct UBP_ServerBrowserRow_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowserRow_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnMouseEnter
	 */
	struct UBP_ServerBrowserRow_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnMouseLeave
	 */
	struct UBP_ServerBrowserRow_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnListItemObjectSet
	 */
	struct UBP_ServerBrowserRow_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnItemSelectionChanged
	 */
	struct UBP_ServerBrowserRow_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BP_OnEntryReleased
	 */
	struct UBP_ServerBrowserRow_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ServerBrowserRow_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ServerBrowserRow_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.BndEvt__FavoriteBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UBP_ServerBrowserRow_C_BndEvt__FavoriteBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.FetchModList
	 */
	struct UBP_ServerBrowserRow_C_FetchModList_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnClickedJoinServer
	 */
	struct UBP_ServerBrowserRow_C_OnClickedJoinServer_Params
	{	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.ExecuteUbergraph_BP_ServerBrowserRow
	 */
	struct UBP_ServerBrowserRow_C_ExecuteUbergraph_BP_ServerBrowserRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3X0L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnFavoriteStatusChanged__DelegateSignature
	 */
	struct UBP_ServerBrowserRow_C_OnFavoriteStatusChanged__DelegateSignature_Params
	{
	public:
		class UBP_ServerBrowserRow_C*                              ForRow;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowserRow.BP_ServerBrowserRow_C.OnJoinRequested__DelegateSignature
	 */
	struct UBP_ServerBrowserRow_C_OnJoinRequested__DelegateSignature_Params
	{
	public:
		struct FBlueprintFindSessionResult                         Session;                                                 // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
