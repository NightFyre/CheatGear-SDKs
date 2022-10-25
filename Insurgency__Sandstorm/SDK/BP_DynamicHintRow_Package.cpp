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
	 * 		Name   -> Function BP_DynamicHintRow.BP_DynamicHintRow_C.GetAdditionalInfo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        AdditionalInfo                                             (Parm, OutParm)
	 */
	void UBP_DynamicHintRow_C::GetAdditionalInfo(class FText* AdditionalInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHintRow.BP_DynamicHintRow_C.GetAdditionalInfo");
		
		UBP_DynamicHintRow_C_GetAdditionalInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AdditionalInfo != nullptr)
			*AdditionalInfo = params.AdditionalInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHintRow.BP_DynamicHintRow_C.Fill Row With Information
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Additional_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  HintTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FVector                                     UseLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timeout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHintRow_C::Fill_Row_With_Information(const class FText& Additional_Info, class UTexture2D* HintTexture, TArray<class FName>* ActionName, const struct FVector& UseLocation, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHintRow.BP_DynamicHintRow_C.Fill Row With Information");
		
		UBP_DynamicHintRow_C_Fill_Row_With_Information_Params params {};
		params.Additional_Info = Additional_Info;
		params.HintTexture = HintTexture;
		params.UseLocation = UseLocation;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionName != nullptr)
			*ActionName = params.ActionName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHintRow.BP_DynamicHintRow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_DynamicHintRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHintRow.BP_DynamicHintRow_C.Construct");
		
		UBP_DynamicHintRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHintRow.BP_DynamicHintRow_C.ExecuteUbergraph_BP_DynamicHintRow
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHintRow_C::ExecuteUbergraph_BP_DynamicHintRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHintRow.BP_DynamicHintRow_C.ExecuteUbergraph_BP_DynamicHintRow");
		
		UBP_DynamicHintRow_C_ExecuteUbergraph_BP_DynamicHintRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DynamicHintRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DynamicHintRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DynamicHintRow.BP_DynamicHintRow_C");
		return ptr;
	}

}


