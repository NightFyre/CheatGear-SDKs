/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerLobbyCapture_Left_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.ReceiveBeginPlay");
		
		ABP_PlayerLobbyCapture_Left_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.OnItemEquipped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimationAsset*                             ItemStandIdle                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                ItemHandType                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                ItemSlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerLobbyCapture_Left_C::OnItemEquipped(class UAnimationAsset* ItemStandIdle, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.OnItemEquipped");
		
		ABP_PlayerLobbyCapture_Left_C_OnItemEquipped_Params params {};
		params.ItemStandIdle = ItemStandIdle;
		params.ItemHandType = ItemHandType;
		params.ItemSlotType = ItemSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.OnVisibleCharacterRenderLeft
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerLobbyCapture_Left_C::OnVisibleCharacterRenderLeft(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.OnVisibleCharacterRenderLeft");
		
		ABP_PlayerLobbyCapture_Left_C_OnVisibleCharacterRenderLeft_Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.ExecuteUbergraph_BP_PlayerLobbyCapture_Left
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerLobbyCapture_Left_C::ExecuteUbergraph_BP_PlayerLobbyCapture_Left(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C.ExecuteUbergraph_BP_PlayerLobbyCapture_Left");
		
		ABP_PlayerLobbyCapture_Left_C_ExecuteUbergraph_BP_PlayerLobbyCapture_Left_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerLobbyCapture_Left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerLobbyCapture_Left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLobbyCapture_Left.BP_PlayerLobbyCapture_Left_C");
		return ptr;
	}

}


