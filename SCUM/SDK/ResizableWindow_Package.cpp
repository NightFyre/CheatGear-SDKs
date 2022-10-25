/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      displayLabelName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               footerV2Activity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               enableResizability                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        titleToSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UHUD_C*                                      parentHUDRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::InitializeHUDMonitor(const class FString& displayLabelName, bool footerV2Activity, bool enableResizability, const class FText& titleToSet, class UHUD_C* parentHUDRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor");
		
		UResizableWindow_C_InitializeHUDMonitor_Params params {};
		params.displayLabelName = displayLabelName;
		params.footerV2Activity = footerV2Activity;
		params.enableResizability = enableResizability;
		params.titleToSet = titleToSet;
		params.parentHUDRef = parentHUDRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SaveHUDLayout
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::SaveHUDLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveHUDLayout");
		
		UResizableWindow_C_SaveHUDLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.GetParentHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUD_C*                                      parentHUD                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::GetParentHUD(class UHUD_C** parentHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetParentHUD");
		
		UResizableWindow_C_GetParentHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (parentHUD != nullptr)
			*parentHUD = params.parentHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetParentHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUD_C*                                      parentHUD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::SetParentHUD(class UHUD_C* parentHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetParentHUD");
		
		UResizableWindow_C_SetParentHUD_Params params {};
		params.parentHUD = parentHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.GetSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UResizableWindow_C::GetSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetSize");
		
		UResizableWindow_C_GetSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.GetPosition
	 * 		Flags  -> ()
	 */
	struct FVector2D UResizableWindow_C::GetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetPosition");
		
		UResizableWindow_C_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.AdjustPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   positionToAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGeometry                                   LocalGeometry                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::AdjustPosition(const struct FVector2D& positionToAdjust, const struct FGeometry& LocalGeometry, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AdjustPosition");
		
		UResizableWindow_C_AdjustPosition_Params params {};
		params.positionToAdjust = positionToAdjust;
		params.LocalGeometry = LocalGeometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::MaximizeMinimizableWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets");
		
		UResizableWindow_C_MaximizeMinimizableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.HasAnyChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                PanelWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UResizableWindow_C::HasAnyChildren(class UPanelWidget* PanelWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.HasAnyChildren");
		
		UResizableWindow_C_HasAnyChildren_Params params {};
		params.PanelWidget = PanelWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UResizableWindow_C::OnHeaderDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick");
		
		UResizableWindow_C_OnHeaderDoubleClick_Params params {};
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
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowsContent_C*                           contentWidgetRef                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        titleToSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UResizableWindow_C::SetUpResizableWindowWithChildRef(class UWindowsContent_C* contentWidgetRef, const class FText& titleToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef");
		
		UResizableWindow_C_SetUpResizableWindowWithChildRef_Params params {};
		params.contentWidgetRef = contentWidgetRef;
		params.titleToSet = titleToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::AdjustSizeToContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent");
		
		UResizableWindow_C_AdjustSizeToContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   newSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::SetSize(const struct FVector2D& newSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetSize");
		
		UResizableWindow_C_SetSize_Params params {};
		params.newSize = newSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.GetContentSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   contentSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::GetContentSize(struct FVector2D* contentSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentSize");
		
		UResizableWindow_C_GetContentSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (contentSize != nullptr)
			*contentSize = params.contentSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enableResizability                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResizableWindow_C::SetResizeEnableLocked(bool enableResizability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked");
		
		UResizableWindow_C_SetResizeEnableLocked_Params params {};
		params.enableResizability = enableResizability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldActivateAlarmColor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResizableWindow_C::ActivateAlarmColor(bool shouldActivateAlarmColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor");
		
		UResizableWindow_C_ActivateAlarmColor_Params params {};
		params.shouldActivateAlarmColor = shouldActivateAlarmColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ShowBorder
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::ShowBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ShowBorder");
		
		UResizableWindow_C_ShowBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills
	 * 		Flags  -> ()
	 */
	bool UResizableWindow_C::isResizableWindowSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills");
		
		UResizableWindow_C_isResizableWindowSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowsContent_C*                           windowsContentWidget                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::GetWindowsContentWidget(class UWindowsContent_C** windowsContentWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget");
		
		UResizableWindow_C_GetWindowsContentWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (windowsContentWidget != nullptr)
			*windowsContentWidget = params.windowsContentWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowsContent_C*                           windowsContentWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::SetWindowsContentWidget(class UWindowsContent_C* windowsContentWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget");
		
		UResizableWindow_C_SetWindowsContentWidget_Params params {};
		params.windowsContentWidget = windowsContentWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldBeActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResizableWindow_C::SetFooterV2Activity(bool shouldBeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity");
		
		UResizableWindow_C_SetFooterV2Activity_Params params {};
		params.shouldBeActive = shouldBeActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ResetFlags
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::ResetFlags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetFlags");
		
		UResizableWindow_C_ResetFlags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.Maximize
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::Maximize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Maximize");
		
		UResizableWindow_C_Maximize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.Minimize
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::Minimize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Minimize");
		
		UResizableWindow_C_Minimize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UResizableWindow_C::GetContentAreaSlotDesiredSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize");
		
		UResizableWindow_C_GetContentAreaSlotDesiredSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::SaveCurrentContentAreaSlotSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize");
		
		UResizableWindow_C_SaveCurrentContentAreaSlotSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      contentWidgetClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        titleToSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UResizableWindow_C::SetUpResizableWindow(class UClass* contentWidgetClass, const class FText& titleToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow");
		
		UResizableWindow_C_SetUpResizableWindow_Params params {};
		params.contentWidgetClass = contentWidgetClass;
		params.titleToSet = titleToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.Init
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Init");
		
		UResizableWindow_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WindowsContentClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::SetContentWidgetClass(class UClass* WindowsContentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass");
		
		UResizableWindow_C_SetContentWidgetClass_Params params {};
		params.WindowsContentClass = WindowsContentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowsContent_C*                           contentWidgetRef                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::AttachContentWidgetRef(class UWindowsContent_C* contentWidgetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef");
		
		UResizableWindow_C_AttachContentWidgetRef_Params params {};
		params.contentWidgetRef = contentWidgetRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.AttachContentWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      contentWidgetClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::AttachContentWidget(class UClass* contentWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidget");
		
		UResizableWindow_C_AttachContentWidget_Params params {};
		params.contentWidgetClass = contentWidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               LocalMouseEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector2D                                   LastMousePosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector2D UResizableWindow_C::CalculateMouseDelta(const struct FPointerEvent& LocalMouseEvent, const struct FVector2D& LastMousePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta");
		
		UResizableWindow_C_CalculateMouseDelta_Params params {};
		params.LocalMouseEvent = LocalMouseEvent;
		params.LastMousePosition = LastMousePosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.IsOffscreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UResizableWindow_C::IsOffscreen(const struct FPointerEvent& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.IsOffscreen");
		
		UResizableWindow_C_IsOffscreen_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UResizableWindow_C::OnMouseButtonDownOnIRMinimize(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize");
		
		UResizableWindow_C_OnMouseButtonDownOnIRMinimize_Params params {};
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
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetResizeColorHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::SetResizeColorHover(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeColorHover");
		
		UResizableWindow_C_SetResizeColorHover_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DragEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResizableWindow_C::ToggleDragEnabled(bool DragEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled");
		
		UResizableWindow_C_ToggleDragEnabled_Params params {};
		params.DragEnabled = DragEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ResizeEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResizableWindow_C::ToggleResizeEnabled(bool ResizeEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled");
		
		UResizableWindow_C_ToggleResizeEnabled_Params params {};
		params.ResizeEnabled = ResizeEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.DetermineNewSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Original                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   New                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::DetermineNewSize(const struct FVector2D& Original, const struct FVector2D& Delta, struct FVector2D* New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.DetermineNewSize");
		
		UResizableWindow_C_DetermineNewSize_Params params {};
		params.Original = Original;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New != nullptr)
			*New = params.New;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::MouseButtonUpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent");
		
		UResizableWindow_C_MouseButtonUpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::ResetVariablesToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault");
		
		UResizableWindow_C_ResetVariablesToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UResizableWindow_C::OnResizeAreaMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown");
		
		UResizableWindow_C_OnResizeAreaMouseButtonDown_Params params {};
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
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UResizableWindow_C::OnHeaderMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown");
		
		UResizableWindow_C_OnHeaderMouseButtonDown_Params params {};
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
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UResizableWindow_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseMove");
		
		UResizableWindow_C_OnMouseMove_Params params {};
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
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UResizableWindow_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp");
		
		UResizableWindow_C_OnMouseButtonUp_Params params {};
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
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Tick");
		
		UResizableWindow_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::Event_RDA_Monitor_Size_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed");
		
		UResizableWindow_C_Event_RDA_Monitor_Size_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::AlarmOnWindowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent");
		
		UResizableWindow_C_AlarmOnWindowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::AlarmOffWindowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent");
		
		UResizableWindow_C_AlarmOffWindowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UResizableWindow_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent");
		
		UResizableWindow_C_OnHeaderDoubleClickEvent_Params params {};
		params.Geometry = Geometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnMaximized
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::OnMaximized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMaximized");
		
		UResizableWindow_C_OnMaximized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SaveLayout
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::SaveLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveLayout");
		
		UResizableWindow_C_SaveLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.LoadLayout
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::LoadLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.LoadLayout");
		
		UResizableWindow_C_LoadLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ResetLayout
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::ResetLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetLayout");
		
		UResizableWindow_C_ResetLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature");
		
		UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature");
		
		UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResizableWindow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseLeave");
		
		UResizableWindow_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Construct");
		
		UResizableWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        titleToSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UResizableWindow_C::SetTitle(const class FText& titleToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetTitle");
		
		UResizableWindow_C_SetTitle_Params params {};
		params.titleToSet = titleToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResizableWindow_C::ExecuteUbergraph_ResizableWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow");
		
		UResizableWindow_C_ExecuteUbergraph_ResizableWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UResizableWindow_C::OnHeaderDoubleClickDispatcher__DelegateSignature(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature");
		
		UResizableWindow_C_OnHeaderDoubleClickDispatcher__DelegateSignature_Params params {};
		params.Geometry = Geometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::ContentMaximizedEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature");
		
		UResizableWindow_C_ContentMaximizedEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UResizableWindow_C::ContentSizeChangedEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature");
		
		UResizableWindow_C_ContentSizeChangedEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResizableWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResizableWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResizableWindow.ResizableWindow_C");
		return ptr;
	}

}


