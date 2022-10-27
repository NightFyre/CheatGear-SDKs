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
	 * 		Name   -> Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.GetPlatformIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTexture2D*                                  IconTexture                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_Hover_C::GetPlatformIcon(class UTexture2D** IconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.GetPlatformIcon");
		
		UBP_OSSStatus_Hover_C_GetPlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconTexture != nullptr)
			*IconTexture = params.IconTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_OSSStatus_Hover_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.Construct");
		
		UBP_OSSStatus_Hover_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.ExecuteUbergraph_BP_OSSStatus_Hover
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OSSStatus_Hover_C::ExecuteUbergraph_BP_OSSStatus_Hover(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OSSStatus_Hover.BP_OSSStatus_Hover_C.ExecuteUbergraph_BP_OSSStatus_Hover");
		
		UBP_OSSStatus_Hover_C_ExecuteUbergraph_BP_OSSStatus_Hover_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OSSStatus_Hover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OSSStatus_Hover_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OSSStatus_Hover.BP_OSSStatus_Hover_C");
		return ptr;
	}

}


