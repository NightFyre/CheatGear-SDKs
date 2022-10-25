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
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.UpdateSupplyPoints
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSupplyPoints                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ResupplyIndication_C::UpdateSupplyPoints(int32_t NewSupplyPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.UpdateSupplyPoints");
		
		UBP_ResupplyIndication_C_UpdateSupplyPoints_Params params {};
		params.NewSupplyPoints = NewSupplyPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.SetCanResupply
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewCanResupply                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ResupplyIndication_C::SetCanResupply(bool bNewCanResupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.SetCanResupply");
		
		UBP_ResupplyIndication_C_SetCanResupply_Params params {};
		params.bNewCanResupply = bNewCanResupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.Finished_09BC22584AA513E0F8156FBCF390AF7E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ResupplyIndication_C::Finished_09BC22584AA513E0F8156FBCF390AF7E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.Finished_09BC22584AA513E0F8156FBCF390AF7E");
		
		UBP_ResupplyIndication_C_Finished_09BC22584AA513E0F8156FBCF390AF7E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.Finished_42303AD64EF95B325BE93EACDC8D409D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ResupplyIndication_C::Finished_42303AD64EF95B325BE93EACDC8D409D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.Finished_42303AD64EF95B325BE93EACDC8D409D");
		
		UBP_ResupplyIndication_C_Finished_42303AD64EF95B325BE93EACDC8D409D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ResupplyIndication_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.Construct");
		
		UBP_ResupplyIndication_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.OnTotalSupplyChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AvailableSupply                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ResupplyIndication_C::OnTotalSupplyChanged(int32_t AvailableSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.OnTotalSupplyChanged");
		
		UBP_ResupplyIndication_C_OnTotalSupplyChanged_Params params {};
		params.AvailableSupply = AvailableSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.OnAvailableSupplyChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AvailableSupply                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ResupplyIndication_C::OnAvailableSupplyChanged(int32_t AvailableSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.OnAvailableSupplyChanged");
		
		UBP_ResupplyIndication_C_OnAvailableSupplyChanged_Params params {};
		params.AvailableSupply = AvailableSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.PlayFadeInOrOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFadeIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ResupplyIndication_C::PlayFadeInOrOut(bool bFadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.PlayFadeInOrOut");
		
		UBP_ResupplyIndication_C_PlayFadeInOrOut_Params params {};
		params.bFadeIn = bFadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ResupplyIndication.BP_ResupplyIndication_C.ExecuteUbergraph_BP_ResupplyIndication
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ResupplyIndication_C::ExecuteUbergraph_BP_ResupplyIndication(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResupplyIndication.BP_ResupplyIndication_C.ExecuteUbergraph_BP_ResupplyIndication");
		
		UBP_ResupplyIndication_C_ExecuteUbergraph_BP_ResupplyIndication_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ResupplyIndication_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ResupplyIndication_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ResupplyIndication.BP_ResupplyIndication_C");
		return ptr;
	}

}


