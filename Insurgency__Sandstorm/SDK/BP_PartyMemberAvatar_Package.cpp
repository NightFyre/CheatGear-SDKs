/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRequestData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnRequestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRequestData");
		
		UBP_PartyMemberAvatar_C_OnRequestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnKickPartyMember
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      User_Net_Id                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::OnKickPartyMember(const class FString& User_Net_Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnKickPartyMember");
		
		UBP_PartyMemberAvatar_C_OnKickPartyMember_Params params {};
		params.User_Net_Id = User_Net_Id;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.GetUserNetID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::GetUserNetID(class FString* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.GetUserNetID");
		
		UBP_PartyMemberAvatar_C_GetUserNetID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.SetDefaultAvatar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::SetDefaultAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.SetDefaultAvatar");
		
		UBP_PartyMemberAvatar_C_SetDefaultAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLeader                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLocal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PlatfomId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::SetData(bool IsLeader, bool IsLocal, const class FString& PlatfomId, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.SetData");
		
		UBP_PartyMemberAvatar_C_SetData_Params params {};
		params.IsLeader = IsLeader;
		params.IsLocal = IsLocal;
		params.PlatfomId = PlatfomId;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.On_Anchor_GetMenuContent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UBP_PartyMemberAvatar_C::On_Anchor_GetMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.On_Anchor_GetMenuContent_1");
		
		UBP_PartyMemberAvatar_C_On_Anchor_GetMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.DisplayPopupMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::DisplayPopupMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.DisplayPopupMenu");
		
		UBP_PartyMemberAvatar_C_DisplayPopupMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPromotePlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InUserNetId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::OnPromotePlayer(const class FString& InUserNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPromotePlayer");
		
		UBP_PartyMemberAvatar_C_OnPromotePlayer_Params params {};
		params.InUserNetId = InUserNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnLeaveParty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnLeaveParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnLeaveParty");
		
		UBP_PartyMemberAvatar_C_OnLeaveParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPopupLeftFocusPath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnPopupLeftFocusPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPopupLeftFocusPath");
		
		UBP_PartyMemberAvatar_C_OnPopupLeftFocusPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PartyMemberAvatar_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnMouseEnter");
		
		UBP_PartyMemberAvatar_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PartyMemberAvatar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnMouseLeave");
		
		UBP_PartyMemberAvatar_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_PartyMemberAvatar_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRemovedFromFocusPath");
		
		UBP_PartyMemberAvatar_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnNameUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::OnNameUpdated(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnNameUpdated");
		
		UBP_PartyMemberAvatar_C_OnNameUpdated_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnTextureUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::OnTextureUpdated(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnTextureUpdated");
		
		UBP_PartyMemberAvatar_C_OnTextureUpdated_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.Construct");
		
		UBP_PartyMemberAvatar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnConnectionStatusChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bConnected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PartyMemberAvatar_C::OnConnectionStatusChanged(bool bConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnConnectionStatusChanged");
		
		UBP_PartyMemberAvatar_C_OnConnectionStatusChanged_Params params {};
		params.bConnected = bConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnConsoleContextMenuClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnConsoleContextMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnConsoleContextMenuClosed");
		
		UBP_PartyMemberAvatar_C_OnConsoleContextMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_PartyMemberAvatar_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnAddedToFocusPath");
		
		UBP_PartyMemberAvatar_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.UsingController
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    NewIconType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::UsingController(bool UsingController, EeInputIconType NewIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.UsingController");
		
		UBP_PartyMemberAvatar_C_UsingController_Params params {};
		params.UsingController = UsingController;
		params.NewIconType = NewIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.BndEvt__PartyMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::BndEvt__PartyMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.BndEvt__PartyMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_PartyMemberAvatar_C_BndEvt__PartyMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.ExecuteUbergraph_BP_PartyMemberAvatar
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::ExecuteUbergraph_BP_PartyMemberAvatar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.ExecuteUbergraph_BP_PartyMemberAvatar");
		
		UBP_PartyMemberAvatar_C_ExecuteUbergraph_BP_PartyMemberAvatar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnUnhoverPartyMember__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnUnhoverPartyMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnUnhoverPartyMember__DelegateSignature");
		
		UBP_PartyMemberAvatar_C_OnUnhoverPartyMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnHoverPartyMember__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnHoverPartyMember__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnHoverPartyMember__DelegateSignature");
		
		UBP_PartyMemberAvatar_C_OnHoverPartyMember__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPartyMemberLeave__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnPartyMemberLeave__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPartyMemberLeave__DelegateSignature");
		
		UBP_PartyMemberAvatar_C_OnPartyMemberLeave__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRemoveFromFocusPath__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PartyMemberAvatar_C::OnRemoveFromFocusPath__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnRemoveFromFocusPath__DelegateSignature");
		
		UBP_PartyMemberAvatar_C_OnRemoveFromFocusPath__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPartyMemberSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      UserNetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_PartyMemberAvatar_C::OnPartyMemberSelected__DelegateSignature(bool bIsLocalPlayer, bool bIsLeader, const class FString& UserNetId, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyMemberAvatar.BP_PartyMemberAvatar_C.OnPartyMemberSelected__DelegateSignature");
		
		UBP_PartyMemberAvatar_C_OnPartyMemberSelected__DelegateSignature_Params params {};
		params.bIsLocalPlayer = bIsLocalPlayer;
		params.bIsLeader = bIsLeader;
		params.UserNetId = UserNetId;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PartyMemberAvatar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PartyMemberAvatar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PartyMemberAvatar.BP_PartyMemberAvatar_C");
		return ptr;
	}

}


