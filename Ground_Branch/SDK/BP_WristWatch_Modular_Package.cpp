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
	 * 		Name   -> Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnLoaded_ACB25BB1431690D222BD5B836B55DB38
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_WristWatch_Modular_C::OnLoaded_ACB25BB1431690D222BD5B836B55DB38(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnLoaded_ACB25BB1431690D222BD5B836B55DB38");
		
		ABP_WristWatch_Modular_C_OnLoaded_ACB25BB1431690D222BD5B836B55DB38_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnBecomeViewTarget_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WristWatch_Modular_C::OnBecomeViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnBecomeViewTarget_Event_1");
		
		ABP_WristWatch_Modular_C_OnBecomeViewTarget_Event_1_Params params {};
		params.PlayerController = PlayerController;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnEndViewTarget_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WristWatch_Modular_C::OnEndViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnEndViewTarget_Event_1");
		
		ABP_WristWatch_Modular_C_OnEndViewTarget_Event_1_Params params {};
		params.PlayerController = PlayerController;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnReceivePlayerState_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WristWatch_Modular_C::OnReceivePlayerState_Event_1(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnReceivePlayerState_Event_1");
		
		ABP_WristWatch_Modular_C_OnReceivePlayerState_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnAddedToItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     NewParentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WristWatch_Modular_C::OnAddedToItem(class AGBItem* NewParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnAddedToItem");
		
		ABP_WristWatch_Modular_C_OnAddedToItem_Params params {};
		params.NewParentItem = NewParentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.ExecuteUbergraph_BP_WristWatch_Modular
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WristWatch_Modular_C::ExecuteUbergraph_BP_WristWatch_Modular(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.ExecuteUbergraph_BP_WristWatch_Modular");
		
		ABP_WristWatch_Modular_C_ExecuteUbergraph_BP_WristWatch_Modular_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WristWatch_Modular_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WristWatch_Modular_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WristWatch_Modular.BP_WristWatch_Modular_C");
		return ptr;
	}

}


