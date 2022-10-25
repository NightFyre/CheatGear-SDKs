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
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_UserMenuManager_C::Open(const class FString& MenuName, const class FName& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.Open");
		
		UWBP_UserMenuManager_C_Open_Params params {};
		params.MenuName = MenuName;
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFUserMenuData                              UserMenu                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_UserMenuManager_C::BuildMenu(const struct FFUserMenuData& UserMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildMenu");
		
		UWBP_UserMenuManager_C_BuildMenu_Params params {};
		params.UserMenu = UserMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildLinearMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFUserMenuData                              UserMenu                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_UserMenuManager_C::BuildLinearMenu(const struct FFUserMenuData& UserMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildLinearMenu");
		
		UWBP_UserMenuManager_C_BuildLinearMenu_Params params {};
		params.UserMenu = UserMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_UserMenuManager_C::OnSelected_Event_1(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event_1");
		
		UWBP_UserMenuManager_C_OnSelected_Event_1_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFUserMenuData                              UserMenu                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_UserMenuManager_C::BuildRadialMenu(const struct FFUserMenuData& UserMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildRadialMenu");
		
		UWBP_UserMenuManager_C_BuildRadialMenu_Params params {};
		params.UserMenu = UserMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_UserMenuManager_C::OnSelected_Event(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event");
		
		UWBP_UserMenuManager_C_OnSelected_Event_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.ForceClosed
	 * 		Flags  -> ()
	 */
	void UWBP_UserMenuManager_C::ForceClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.ForceClosed");
		
		UWBP_UserMenuManager_C_ForceClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UserMenuManager.WBP_UserMenuManager_C.ExecuteUbergraph_WBP_UserMenuManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_UserMenuManager_C::ExecuteUbergraph_WBP_UserMenuManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_UserMenuManager.WBP_UserMenuManager_C.ExecuteUbergraph_WBP_UserMenuManager");
		
		UWBP_UserMenuManager_C_ExecuteUbergraph_WBP_UserMenuManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_UserMenuManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_UserMenuManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_UserMenuManager.WBP_UserMenuManager_C");
		return ptr;
	}

}


