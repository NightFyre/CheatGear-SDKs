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
	 * 		RVA    -> 0x04E1BBD0
	 * 		Name   -> Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.SetVerticleBoxNavigation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVerticalBox*                                bpp__VerticalBox__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Widget_C::STATIC_SetVerticleBoxNavigation(class UVerticalBox* bpp__VerticalBox__pf, class UObject* bpp____WorldContext__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.SetVerticleBoxNavigation");
		
		UBP_FuncLibrary_Widget_C_SetVerticleBoxNavigation_Params params {};
		params.bpp__VerticalBox__pf = bpp__VerticalBox__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1BB20
	 * 		Name   -> Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.SetVerticalPanelNavigation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPanelWidget*                                bpp__VerticalPanel__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Widget_C::STATIC_SetVerticalPanelNavigation(class UPanelWidget* bpp__VerticalPanel__pf, class UObject* bpp____WorldContext__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.SetVerticalPanelNavigation");
		
		UBP_FuncLibrary_Widget_C_SetVerticalPanelNavigation_Params params {};
		params.bpp__VerticalPanel__pf = bpp__VerticalPanel__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1B800
	 * 		Name   -> Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.ScrollWithRightStick
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnalogInputEvent                           bpp__AnalogInputEvent__pf                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UScrollBox*                                  bpp__Scrollbox__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__ScrollSpeed__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEventReply                                 bpp__Reply__pf                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Widget_C::STATIC_ScrollWithRightStick(const struct FAnalogInputEvent& bpp__AnalogInputEvent__pf, class UScrollBox* bpp__Scrollbox__pf, float bpp__ScrollSpeed__pf, class UObject* bpp____WorldContext__pf, struct FEventReply* bpp__Reply__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.ScrollWithRightStick");
		
		UBP_FuncLibrary_Widget_C_ScrollWithRightStick_Params params {};
		params.bpp__AnalogInputEvent__pf = bpp__AnalogInputEvent__pf;
		params.bpp__Scrollbox__pf = bpp__Scrollbox__pf;
		params.bpp__ScrollSpeed__pf = bpp__ScrollSpeed__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Reply__pf != nullptr)
			*bpp__Reply__pf = params.bpp__Reply__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1B4D0
	 * 		Name   -> Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetVisibleChildrenCount
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                bpp__Target__pf                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__Count__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Widget_C::STATIC_GetVisibleChildrenCount(class UPanelWidget* bpp__Target__pf, class UObject* bpp____WorldContext__pf, int32_t* bpp__Count__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetVisibleChildrenCount");
		
		UBP_FuncLibrary_Widget_C_GetVisibleChildrenCount_Params params {};
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Count__pf != nullptr)
			*bpp__Count__pf = params.bpp__Count__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1ABB0
	 * 		Name   -> Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetFirstFocusableChild
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                bpp__Target__pf                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Reversed__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     bpp__Child__pf                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Widget_C::STATIC_GetFirstFocusableChild(class UPanelWidget* bpp__Target__pf, bool bpp__Reversed__pf, class UObject* bpp____WorldContext__pf, class UWidget** bpp__Child__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetFirstFocusableChild");
		
		UBP_FuncLibrary_Widget_C_GetFirstFocusableChild_Params params {};
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Reversed__pf = bpp__Reversed__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Child__pf != nullptr)
			*bpp__Child__pf = params.bpp__Child__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E1AA60
	 * 		Name   -> Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetFirstFocusableAndVisibleChild
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                bpp__Target__pf                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Reversed__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     bpp__Child__pf                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FuncLibrary_Widget_C::STATIC_GetFirstFocusableAndVisibleChild(class UPanelWidget* bpp__Target__pf, bool bpp__Reversed__pf, class UObject* bpp____WorldContext__pf, class UWidget** bpp__Child__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetFirstFocusableAndVisibleChild");
		
		UBP_FuncLibrary_Widget_C_GetFirstFocusableAndVisibleChild_Params params {};
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Reversed__pf = bpp__Reversed__pf;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Child__pf != nullptr)
			*bpp__Child__pf = params.bpp__Child__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FuncLibrary_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FuncLibrary_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C");
		return ptr;
	}

}


