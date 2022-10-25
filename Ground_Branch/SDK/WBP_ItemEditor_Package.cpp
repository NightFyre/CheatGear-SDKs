/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.SetupSkin
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::SetupSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.SetupSkin");
		
		UWBP_ItemEditor_C_SetupSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.IsValidSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutIsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OutInvalidMessage                                          (Parm, OutParm)
	 */
	void UWBP_ItemEditor_C::IsValidSetup(bool* bOutIsValid, class FText* OutInvalidMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.IsValidSetup");
		
		UWBP_ItemEditor_C_IsValidSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsValid != nullptr)
			*bOutIsValid = params.bOutIsValid;
		if (OutInvalidMessage != nullptr)
			*OutInvalidMessage = params.OutInvalidMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.GetHoveredItemTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_ItemEditor_C::GetHoveredItemTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.GetHoveredItemTooltip");
		
		UWBP_ItemEditor_C_GetHoveredItemTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_ItemEditor_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseButtonDown");
		
		UWBP_ItemEditor_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.UpdateItemUnderCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ItemEditor_C::UpdateItemUnderCursor(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.UpdateItemUnderCursor");
		
		UWBP_ItemEditor_C_UpdateItemUnderCursor_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnDragDetected");
		
		UWBP_ItemEditor_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.MakeInteractive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::MakeInteractive(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.MakeInteractive");
		
		UWBP_ItemEditor_C_MakeInteractive_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_ItemEditor_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseWheel");
		
		UWBP_ItemEditor_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_ItemEditor_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnMouseMove");
		
		UWBP_ItemEditor_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.Zoom Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WheelDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::Zoom_Camera(float WheelDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.Zoom Camera");
		
		UWBP_ItemEditor_C_Zoom_Camera_Params params {};
		params.WheelDelta = WheelDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.RotateItemOrChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   MouseDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::RotateItemOrChar(const struct FVector2D& MouseDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.RotateItemOrChar");
		
		UWBP_ItemEditor_C_RotateItemOrChar_Params params {};
		params.MouseDelta = MouseDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.MoveCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   MouseDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::MoveCamera(const struct FVector2D& MouseDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.MoveCamera");
		
		UWBP_ItemEditor_C_MoveCamera_Params params {};
		params.MouseDelta = MouseDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.Construct");
		
		UWBP_ItemEditor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.SetupFloatingItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BoundsMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PitchOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              YawOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOffsetItemBy90                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemEditor_C::SetupFloatingItem(float BoundsMultiplier, float ZOffset, float PitchOffset, float YawOffset, bool bOffsetItemBy90)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.SetupFloatingItem");
		
		UWBP_ItemEditor_C_SetupFloatingItem_Params params {};
		params.BoundsMultiplier = BoundsMultiplier;
		params.ZOffset = ZOffset;
		params.PitchOffset = PitchOffset;
		params.YawOffset = YawOffset;
		params.bOffsetItemBy90 = bOffsetItemBy90;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::BndEvt__Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemEditor_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemEditor_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.Close
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.Close");
		
		UWBP_ItemEditor_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.SetupAttachedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   AttachedItemBounds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttachedCameraVecOffset                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    AttachedCameraRotOffset                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemEditor_C::SetupAttachedItem(const struct FVector2D& AttachedItemBounds, const struct FVector& AttachedCameraVecOffset, const struct FRotator& AttachedCameraRotOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.SetupAttachedItem");
		
		UWBP_ItemEditor_C_SetupAttachedItem_Params params {};
		params.AttachedItemBounds = AttachedItemBounds;
		params.AttachedCameraVecOffset = AttachedCameraVecOffset;
		params.AttachedCameraRotOffset = AttachedCameraRotOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.Tick");
		
		UWBP_ItemEditor_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnOkClicked_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::OnOkClicked_Event_1(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnOkClicked_Event_1");
		
		UWBP_ItemEditor_C_OnOkClicked_Event_1_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.SaveKit
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::SaveKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.SaveKit");
		
		UWBP_ItemEditor_C_SaveKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnConfirmOkClicked_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_DialogueBox_C*                          Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::OnConfirmOkClicked_Event_1(class UWBP_DialogueBox_C* Dialogue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnConfirmOkClicked_Event_1");
		
		UWBP_ItemEditor_C_OnConfirmOkClicked_Event_1_Params params {};
		params.Dialogue = Dialogue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.AddItemCustomisationWidget
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::AddItemCustomisationWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.AddItemCustomisationWidget");
		
		UWBP_ItemEditor_C_AddItemCustomisationWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.MakeAllInteractive
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::MakeAllInteractive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.MakeAllInteractive");
		
		UWBP_ItemEditor_C_MakeAllInteractive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.LoadDraggedItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_DragItem_Visual_C*                      DragItemVisual                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     DraggedItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::LoadDraggedItemIcon(class UWBP_DragItem_Visual_C* DragItemVisual, class AGBItem* DraggedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.LoadDraggedItemIcon");
		
		UWBP_ItemEditor_C_LoadDraggedItemIcon_Params params {};
		params.DragItemVisual = DragItemVisual;
		params.DraggedItem = DraggedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.DraggedItemIconLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::DraggedItemIconLoaded_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.DraggedItemIconLoaded_Event");
		
		UWBP_ItemEditor_C_DraggedItemIconLoaded_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.Cancel");
		
		UWBP_ItemEditor_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.SavePrompt
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::SavePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.SavePrompt");
		
		UWBP_ItemEditor_C_SavePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnCancelClicked_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::OnCancelClicked_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnCancelClicked_Event_1");
		
		UWBP_ItemEditor_C_OnCancelClicked_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.MoveArmsOutOfWay
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::MoveArmsOutOfWay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.MoveArmsOutOfWay");
		
		UWBP_ItemEditor_C_MoveArmsOutOfWay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnKitAssetsLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             LoadedAssets                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ItemEditor_C::OnKitAssetsLoaded_Event(TArray<class UObject*> LoadedAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnKitAssetsLoaded_Event");
		
		UWBP_ItemEditor_C_OnKitAssetsLoaded_Event_Params params {};
		params.LoadedAssets = LoadedAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.Destruct");
		
		UWBP_ItemEditor_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__WBP_ItemEditor_Button_Clear_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::BndEvt__WBP_ItemEditor_Button_Clear_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.BndEvt__WBP_ItemEditor_Button_Clear_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemEditor_C_BndEvt__WBP_ItemEditor_Button_Clear_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnOkClicked_Event_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_DialogueBox_C*                          Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::OnOkClicked_Event_2(class UWBP_DialogueBox_C* Dialogue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnOkClicked_Event_2");
		
		UWBP_ItemEditor_C_OnOkClicked_Event_2_Params params {};
		params.Dialogue = Dialogue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.ExecuteUbergraph_WBP_ItemEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::ExecuteUbergraph_WBP_ItemEditor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.ExecuteUbergraph_WBP_ItemEditor");
		
		UWBP_ItemEditor_C_ExecuteUbergraph_WBP_ItemEditor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnOk__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           KitJsonObj                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemEditor_C::OnOk__DelegateSignature(class UVaRestJsonObject* KitJsonObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnOk__DelegateSignature");
		
		UWBP_ItemEditor_C_OnOk__DelegateSignature_Params params {};
		params.KitJsonObj = KitJsonObj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemEditor.WBP_ItemEditor_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemEditor_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemEditor.WBP_ItemEditor_C.OnCancel__DelegateSignature");
		
		UWBP_ItemEditor_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemEditor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemEditor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemEditor.WBP_ItemEditor_C");
		return ptr;
	}

}


